# Unit II - C++ Programming Activity (Inheritance)

* **Student Name:** Mahi Randhir Kawale
* **PRN:** AD2131
* **Class / Division:** S.Y. B.Tech. AI&DS – Div A
* **Course Name:** OOPs with C++ (Object-Oriented Programming with C++ – ADPC303)
* **Unit:** Unit II – Inheritance (Unit II–IV Activity)
* **Language Standard:** C++17

---

## List of Programs & Brief Descriptions

| Sr. No. | Program File | Output Screenshot | Program Title & Brief Description |
| :--- | :--- | :--- | :--- |
| 01 | `01_basic_single_inheritance.cpp` | `01_output.png` | **Basic Single Inheritance:** Implements single inheritance where `Student` publicly inherits from base class `Person` to reuse `displayName()` and display student details. |
| 02 | `02_protected_member_access.cpp` | `02_output.png` | **Protected Member Access:** Demonstrates how a derived class (`Developer`) directly accesses the `protected` member `name` of its base class (`Employee`) while keeping it hidden from external code. |
| 03 | `03_public_vs_private_inheritance.cpp` | `03_output.png` | **Public vs Private Inheritance:** Contrasts `public` inheritance (preserving public access to `Base::show()`) with `private` inheritance (restricting inherited members to internal class access only). |
| 04 | `04_multilevel_inheritance.cpp` | `04_output.png` | **Multilevel Inheritance:** Implements a three-level inheritance chain (`Person -> Employee -> Manager`) where `Manager` combines attributes and display methods from both ancestor classes. |
| 05 | `05_hierarchical_inheritance.cpp` | `05_output.png` | **Hierarchical Inheritance:** Uses `Vehicle` as a common base class shared by two specialized derived classes (`Car` and `Bike`), each adding its own distinct behavior. |
| 06 | `06_multiple_inheritance.cpp` | `06_output.png` | **Multiple Inheritance:** Demonstrates a `Student` class inheriting simultaneously from two independent base classes (`Academic` and `Sports`) to compute total marks. |
| 07 | `07_multiple_inheritance_ambiguity.cpp` | `07_output.png` | **Resolving Multiple-Inheritance Ambiguity:** Uses the scope-resolution operator (`Academic::display()` and `Sports::display()`) to resolve function-name collisions across multiple base classes. |
| 08 | `08_constructor_destructor_order.cpp` | `08_output.png` | **Constructor and Destructor Order:** Illustrates the C++ object lifecycle in inheritance—constructors execute top-down (`Base` then `Derived`), while destructors execute bottom-up (`Derived` then `Base`). |
| 09 | `09_parameterized_base_constructor.cpp` | `09_output.png` | **Parameterized Base Constructor:** Passes arguments from a derived `Student` constructor to a parameterized `Person` constructor using a member initializer list. |
| 10 | `10_function_overriding.cpp` | `10_output.png` | **Function Overriding:** Demonstrates runtime polymorphism by overriding a `virtual` base method (`Vehicle::move()`) in `Car` and `Boat` using the `override` specifier. |
| 11 | `11_abstract_class.cpp` | `11_output.png` | **Abstract Class:** Defines an abstract base class `Shape` with a pure virtual function (`area() = 0`), enforcing concrete area implementations in `Rectangle` and `Circle`. |
| 12 | `12_virtual_base_class_diamond.cpp` | `12_output.png` | **Virtual Base Class (Diamond Inheritance):** Resolves duplicate base-subobject ambiguity in diamond inheritance (`Person -> Student/Employee -> TeachingAssistant`) using `virtual public Person`. |
| 13 | `13_friend_class.cpp` | `13_output.png` | **Friend Class:** Grants an external `Auditor` class special permission via `friend class Auditor` to inspect the private `balance` member of `Account`. |
| 14 | `14_nested_class.cpp` | `14_output.png` | **Nested Class:** Defines a scoped inner class (`University::Department`) inside an outer enclosing class (`University`) to model tightly coupled organizational structure. |
| 15 | `15_mini_project_vehicle_rental.cpp` | `15_output.png` | **Mini-Project – Vehicle Rental System:** Integrates inheritance, virtual methods, and overriding (`Car` standard rate vs. `Bike` 10% discounted rate) to calculate multi-day rental charges. |
| 16 | `16_mini_project_employee_payroll.cpp` | `16_output.png` | **Mini-Project – Employee Payroll System:** Combines an abstract `Employee` base class, polymorphic pay-slip generation via base references, and specialized salary formulas for `PermanentEmployee` and `ContractEmployee`. |

---

## Compilation & Execution Instructions

```bash
g++ -std=c++17 filename.cpp -o program
./program
```
