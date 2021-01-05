/*
Name: Ibrahim Amgd Algezoly.
Grade: 2nd.
Department: Computer Eng.
*/
#include <iostream>  //استدعاء لمكتبة الادخال و الاخراج 
using namespace std;  // std هنا قمنا بتضيمن النطاق


class Contact { //هنا قمنا بتعريف الكلاس
    public:   //جعل محتويات الكلاس عامة
    string data;
    Contact *next;
};

void push(Contact** head_ref, string new_data){ //إدراج عقدة جديدة في مقدّمة القائمة
    Contact* new_contact = new Contact(); /* 1. حجز موقع العقدة في الذاكرة */
    new_contact->data = new_data; /* 2. إضافة البيانات */
    new_contact->next = (*head_ref);  /* 3. جعل رأس القائمة هو العقدة التالية للعقدة الجديدة */
    (*head_ref) = new_contact;  /* 4. تحريك رأس القائمة ليشير إلى العقدة الجديدة */
};

void insertAfter (Contact* prev_contact, string new_data){  /* إدراج عقدة بعد العقدة السابقة المعطاة */
    if (prev_contact == NULL){  /* Null التحقق من أنّ العقدة السابقة المعطاة تحمل القيمة */
		cout<<"the given previous node cannot be NULL"; 
        return;
    }
    Contact* new_contact = new Contact();  /*  حجز موقع العقدة الجديدة في الذاكرة */

    new_contact->data = new_data;  /*  إضافة البيانات */
    new_contact->next = prev_contact->next;  /*  جعل العقدة اللاحقة للعقدة الجديدة هي العقدة اللاحقة للعقدة السابقة */
    prev_contact->next = new_contact;  /*  تحريك العقدة التالية للعقدة السابقة لتصبح العقدة الجديدة */
};

void append(Contact** head_ref, string new_data){  //إلحاق عقدة جديدة في نهاية القائمة
    Contact* new_contact = new Contact();  /*  حجز موقع العقدة الجديدة في الذاكرة */
    Contact *last = *head_ref;  /* يستخدم في الخطوة */
    new_contact->data = new_data;  /*  إدراج البيانات */
    new_contact->next = NULL;  /*  ستكون العقدة الجديدة هي العقدة الأخير في القائمة
	لذا سنجعل العقدة اللاحقة لها هي
	NULL*/
    if (*head_ref == NULL){  /*  إن كانت القائمة فارغةً
	ستكون العقدة الجديدة في رأس القائمة*/
        *head_ref = new_contact;
        return;
    }
    while (last->next != NULL)  /*  وإن لم تكن القائمة فارغة ننقل العقدة الجديدة إلى نهاية القائمة */
        last = last->next;
        last->next = new_contact; /* نغير العقدة اللاحقة للعقدة الأخيرة. */
        return;
          
};

void deleteField(Contact *head, Contact *n)    // تحذف الدالة أول ظهور للمفتاح المعطى في القائمة المترابطة
{ 
	if (head == n)     
	{ 
		if (head->next == NULL)
        {
            cout<<"There is only one node."<<"The list can't be made empty";
            return ;
        }
        head->data = head->next->data;  
        n = head->next;  
        head->next = head->next->next;  
        return;  
    }  
    Contact *prev = head;  
    while(prev->next != NULL && prev->next != n)  
        prev = prev->next;  
    if(prev->next == NULL)  
    {  
        cout << "\nGiven node is not present in Linked List";  
        return;  
    }  
    prev->next = prev->next->next;  
    
    return;  
};  

bool search(Contact* head, string x)  // تهيئة العقدة الحالية
{ 
	Contact* current = head; 
	while (current != NULL) 
	{ 
		if (current->data == x) 
			return true; 
		current = current->next; 
	} 
	return false; 
};


void printInfo(Contact *c){
    while (c != NULL)
    {
        cout<< c->data << "\n\n";
        c = c->next;
    }
    
};


int main(){  /* الدالة الرئيسية في البرنامج */
    char T;
    string x,y,z, select,op, p, add, a, i, del, s;   /* تعريف للمتغيرات */
    string nam, giv, addi, fam, yomn, gyom, addyom, famyom, pre, suf, ini, nick, sho, maid, birth, gen, loc, bil, dir, mil, occ, hob, sen, pri, sub, note, lang, mem, eonet, eonev, etwot, etwov, ponet, ponev;
    string ptwot, ptwov, pthreet, pthreev, pfourt, pfourv, orgt, orgn, orgyom, orgtit, orgdep, orgs, orgloc, orgjob, web, webv;  
                                         
    //اعطاء قيم افتؤاضية خالية للعقد
    Contact* head = NULL;    Contact* second = NULL;    Contact* third = NULL;
    Contact* forth = NULL;    Contact* fifth = NULL;    Contact* sixth = NULL;
    Contact* seventh = NULL;    Contact* eighth = NULL;    Contact* ninth = NULL;
    Contact* tenth = NULL;    Contact* eleventh = NULL;    Contact* twelfth = NULL;
    Contact* thirteenth = NULL;    Contact* fourteenth = NULL;    Contact* fifteenth = NULL;
    Contact* sixteenth = NULL;    Contact* seventeenth = NULL;    Contact* eighteenth = NULL;
    Contact* nineteenth = NULL;    Contact* twentieth = NULL;    Contact* twentyFirst = NULL;
    Contact* twentySecond = NULL;    Contact* twentyThird = NULL;    Contact* twentyForth = NULL;
    Contact* twentyFifth = NULL;    Contact* twentySixth = NULL;    Contact* twentySeventh = NULL;
    Contact* twentyEighth = NULL;    Contact* twentyNinth = NULL;    Contact* thirty = NULL;
    Contact* thirtyFirst = NULL;    Contact* thirtySecond = NULL;    Contact* thirtyThird = NULL;
    Contact* thirtyForth = NULL;    Contact* thirtyFifth = NULL;     Contact* thirtySixth = NULL;
    Contact* thirtySeventh = NULL;    Contact* thirtyEighth = NULL;    Contact* thirtyNinth = NULL;
    Contact* forty = NULL;    Contact* fortyFirst = NULL;    Contact* fortySecond = NULL;
    Contact* fortyThird = NULL;    Contact* fortyForth = NULL;    Contact* fortyFifth = NULL;
    Contact* fortySixth = NULL;    Contact* fortySeventh = NULL;    Contact* fortyEighth = NULL;
    Contact* fortyNinth = NULL;    Contact* fiftieth = NULL;    Contact* fiftiethFirst = NULL;

    // حجز مواقع لاثنان و خمسون عقدة
    head = new Contact();    second = new Contact();    third = new Contact();
    forth = new Contact();    fifth = new Contact();    sixth = new Contact();
    seventh = new Contact();    eighth = new Contact();    ninth = new Contact();
    tenth = new Contact();    eleventh = new Contact();    twelfth = new Contact();
    thirteenth = new Contact();    fourteenth = new Contact();    fifteenth = new Contact();
    sixteenth = new Contact();    seventeenth = new Contact();    eighteenth = new Contact();
    nineteenth = new Contact();    twentieth = new Contact();    twentyFirst = new Contact();
    twentySecond = new Contact();    twentyThird = new Contact();    twentyForth = new Contact();
    twentyFifth = new Contact();    twentySixth = new Contact();    twentySeventh = new Contact();
    twentyEighth = new Contact();    twentyNinth = new Contact();    thirty = new Contact();
    thirtyFirst = new Contact();    thirtySecond = new Contact();    thirtyThird = new Contact();
    thirtyForth = new Contact();    thirtyFifth = new Contact();     thirtySixth = new Contact();
    thirtySeventh = new Contact();    twentyEighth = new Contact();    thirtyNinth = new Contact();
    forty = new Contact();    fortyFirst = new Contact();    fortySecond = new Contact();
    fortyThird = new Contact();    fortyForth = new Contact();    fortyFifth = new Contact();
    fortySixth = new Contact();    fortySeventh = new Contact();    fortyEighth = new Contact();
    fortyNinth = new Contact();    fiftieth = new Contact();    fiftiethFirst = new Contact();
    
    cout<<"\tMAIN MENU\t\n";
    cout<<"[#] Please insert contact details:  \n";
    cout<<"-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=- \n";


    //اسناد قيم للعقد و ريطها بالعقد الاخري
    cout<<"(*) Insert contact name: ";cin>>nam;
    head->data="Name: "+nam;  
    head->next=second; 
    cout<<"(*) Insert contact given name: ";cin>>giv;
    second->data="Given Name: "+giv;
    second->next=third;
    cout<<"(*) Insert contact additional name: ";cin>>addi;
    third->data="Additional Name: "+addi;
    third->next=forth;
    cout<<"(*) Insert contact family name: ";cin>>fam;
    forth->data="Family Name: "+fam;
    forth->next=fifth;
    cout<<"(*) Insert contact yomi name: ";cin>>yomn;
    fifth->data="Yomi Name: "+yomn;
    fifth->next=sixth;
    cout<<"(*) Insert contact given name yomi: ";cin>>gyom;
    sixth->data="Given Name Yomi: "+gyom;
    sixth->next=seventh;
    cout<<"(*) Insert contact additional name yomi: ";cin>>addyom;
    seventh->data="Additional Name Yomi: "+addyom;
    seventh->next=eighth;
    cout<<"(*) Insert contact family name yomi: ";cin>>famyom;
    eighth->data="Family Name Yomi: "+famyom;
    eighth->next=ninth;
    cout<<"(*) Insert name prefix: ";cin>>pre;
    ninth->data="Name Prefix: "+pre;
    ninth->next=tenth;
    cout<<"(*) Insert name suffix: ";cin>>suf;
    tenth->data="Name Suffix: "+suf;
    tenth->next=eleventh;
    cout<<"(*) Insert initials: ";cin>>ini;
    eleventh->data="Initials: "+ini;
    eleventh->next=twelfth;
    cout<<"(*) Insert nickname: ";cin>>nick;
    twelfth->data="Nickname: "+nick;
    twelfth->next=thirteenth;
    cout<<"(*) Insert short name: ";cin>>sho;
    thirteenth->data="Short Name: "+sho;
    thirteenth->next=fourteenth;
    cout<<"(*) Insert maiden name: ";cin>>maid;
    fourteenth->data="Maiden Name: "+maid;
    fourteenth->next=fifteenth;
    cout<<"(*) Insert birthday: ";cin>>birth;
    fifteenth->data="Birthday: "+birth;
    fifteenth->next=sixteenth;
    cout<<"(*) Insert gender: ";cin>>gen;
    sixteenth->data="Gender: "+gen;
    sixteenth->next=seventeenth;
    cout<<"(*) Insert location: ";cin>>loc;
    seventeenth->data="Location: "+loc;
    seventeenth->next=eighteenth;
    cout<<"(*) Insert billing information: ";cin>>bil;
    eighteenth->data="Billing Information: "+bil;
    eighteenth->next=nineteenth;
    cout<<"(*) Insert directory server: ";cin>>dir;
    nineteenth->data="Directory Server: "+dir;
    nineteenth->next=twentieth;
    cout<<"(*) Insert mileage: ";cin>>mil;
    twentieth->data="Mileage: "+mil;
    twentieth->next=twentyFirst;
    cout<<"(*) Insert occupation: ";cin>>occ;
    twentyFirst->data="Occupation: "+occ;
    twentyFirst->next=twentySecond;
    cout<<"(*) Insert hobby: ";cin>>hob;
    twentySecond->data="Hobby: "+hob;
    twentySecond->next=twentyThird;
    cout<<"(*) Insert sensitivity: ";cin>>sen;
    twentyThird->data="Sensitivity: "+sen;
    twentyThird->next=twentyForth;
    cout<<"(*) Insert priority: ";cin>>pri;
    twentyForth->data="Priority: "+pri;
    twentyForth->next=twentyFifth;
    cout<<"(*) Insert subject: ";cin>>sub;
    twentyFifth->data="Subject: "+sub;
    twentyFifth->next=twentySixth;
    cout<<"(*) Insert notes: ";cin>>note;
    twentySixth->data="Notes: "+note;
    twentySixth->next=twentySeventh;
    cout<<"(*) Insert language: ";lang;
    twentySeventh->data="Language: "+lang;
    twentySeventh->next=twentyNinth;
    cout<<"(*) Insert group memebership: ";cin>>mem;
    twentyNinth->data="Group Membership: "+mem;
    twentyNinth->next=thirty;
    cout<<"(*) Insert e-mail 1 type: ";cin>>eonet;
    thirty->data="E-mail 1 - Type: "+eonet;
    thirty->next=thirtyFirst;
    cout<<"(*) Insert e-mail 1 value: ";cin>>eonev;
    thirtyFirst->data="E-mail 1 - Value: "+eonev;
    thirtyFirst->next=thirtySecond;
    cout<<"(*) Insert e-mail 2 type: ";cin>>etwot;
    thirtySecond->data="E-mail 2 - Type: "+etwot;
    thirtySecond->next=thirtyThird;
    cout<<"(*) Insert e-mail 2 value: ";cin>>etwov;
    thirtyThird->data="E-mail 2 - Value: "+etwov;
    thirtyThird->next=thirtyForth;
    cout<<"(*) Insert phone 1 type: ";cin>>ponet;
    thirtyForth->data="Phone 1 - Type: "+ponet;
    thirtyForth->next=thirtyFifth;
    cout<<"(*) Insert phone 1 value: ";cin>>ponev;
    thirtyFifth->data="Phone 1 - Value: "+ponev;
    thirtyFifth->next=thirtySixth;
    cout<<"(*) Insert phone 2 type: ";cin>>ptwot;
    thirtySixth->data="Phone 2 - Type: "+ptwot;
    thirtySixth->next=thirtySeventh;
    cout<<"(*) Insert phone 2 value: ";cin>>ptwov;
    thirtySeventh->data="Phone 2 - Value: "+ptwov;
    thirtySeventh->next=thirtyEighth;
    cout<<"(*) Insert phone 3 type: ";cin>>pthreet;
    thirtyEighth->data="Phone 3 - Type: "+pthreet;
    thirtyEighth->next=thirtyNinth;
    cout<<"(*) Insert phone 3 value: ";cin>>pthreev;
    thirtyNinth->data="Phone 3 - Value: "+pthreev;
    thirtyNinth->next=forty;
    cout<<"(*) Insert phone 4 type: ";cin>>pfourt;
    forty->data="Phone 4 - Type: "+pfourt;
    forty->next=fortyFirst;
    cout<<"(*) Insert phone 4 value: ";cin>>pfourv;
    fortyFirst->data="Phone 4 - Value: "+pfourv;
    fortyFirst->next=fortySecond;
    cout<<"(*) Insert organization 1 type: ";cin>>orgt;
    fortySecond->data="Organization 1 - Type: "+orgt;
    fortySecond->next=fortyThird;
    cout<<"(*) Insert organization 1 name: ";cin>>orgn;
    fortyThird->data="Organization 1 - Name: "+orgn;
    fortyThird->next=fortyForth;
    cout<<"(*) Insert organization 1 yomi name: ";cin>>orgyom;
    fortyForth->data="Organization 1 - Yomi Name: "+orgyom;
    fortyForth->next=fortyFifth;
    cout<<"(*) Insert organization 1 title: ";cin>>orgtit;
    fortyFifth->data="Organization 1 - Title: "+orgtit;
    fortyFifth->next=fortySixth;
    cout<<"(*) Insert organization 1 department: ";cin>>orgdep;
    fortySixth->data="Organization 1 - Department: "+orgdep;
    fortySixth->next=fortySeventh;
    cout<<"(*) Insert organization 1 symbol: ";cin>>orgs;
    fortySeventh->data="Organization 1 - Symbol: "+orgs;
    fortySeventh->next=fortyEighth;
    cout<<"(*) Insert organization 1 location: ";cin>>orgloc;
    fortyEighth->data="Organization 1 - Location: "+orgloc;
    fortyEighth->next=fortyNinth;
    cout<<"(*) Insert organization 1 job description: ";cin>>orgjob;
    fortyNinth->data="Organization 1 - Job Description: "+orgjob;
    fortyNinth->next=fiftieth;
    cout<<"(*) Insert website 1 type: ";cin>>web;
    fiftieth->data="Website 1 - Type: "+web;
    fiftieth->next=fiftiethFirst;
    cout<<"(*) Insert website 1 value: ";cin>>webv;
    fiftiethFirst->data="Website 1 - Value: "+webv;
    fiftiethFirst->next=NULL;
   
    cout<<"[#] Contact details: \n";
    printInfo(head); //عرض محتويات البرنامج عن طريق دالة العرض

    cout<<"Do you want to edit any field?(Yes/No): "; //الاموامر المعروضة علي المستخدم للاختيار
    cin>> select;    /* ادخال بيانات المستخدم */
    if (select == "Yes"){
        cout<<"Which operation do you want to do?\n[1] add \n[2] delete\n[3] search\n";cin>>op;
    if (op == "add"){  //عرض الامر المختار من قبل المستخدم حتي يتم تنفيزه
        cout<<"do you want to:  \n[1] push \n[2] insert after \n[3] append \n";
        cin>> add;    /* ادخال بيانات المستخدم */
        if (add == "push"){
            cout<<"Insert your field: ";
            cin>> p;    /* ادخال بيانات المستخدم */
            push(&head, p);cout<<endl;
        }else if (add == "insert after"){
            cout<<"Insert your field: ";
            cin>> i;    /* ادخال بيانات المستخدم */
            insertAfter(head->next, i);cout<<endl;
        }else if (add == "append"){
            cout<<"Insert your field: ";
            cin>> a;    /* ادخال بيانات المستخدم */
            append(&head, a);cout<<endl;
        }
    }else if (op == "delete"){
        cout<<"Please put your field that you want to delete: \n";
        cin>> del;    /* ادخال بيانات المستخدم */
        deleteField(head, sixteenth->next);cout<<endl;
    }else if (op == "search"){
        cout<<"Please input field to search: \n\t";
        cin>>s;    /* ادخال بيانات المستخدم */
        search(head, s)? cout<<"\t{Founded}\n" : cout<<"\t{Not Found}\n";
    }
    } else {
        cout<<"\n\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t{Thanks for dealing with us}\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
    }
    cout<<"Show contacts again? (Y/N): ";cin>>T;
    if (T == 'Y'){
    cout<<"[#] Contact details: \n\n<><><><><><><><><><><><><><>\n";
    printInfo(head); //عرض محتويات البرنامج عن طريق دالة العرض
    } else {
        cout<<"\n\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t{Thanks for dealing with us}\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
    };

    return 0;

}














