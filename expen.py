expenses = []

while True:

    print("\n====== EXPENSE TRACKER ======")
    print("1. Add Expense")
    print("2. View Expenses")
    print("3. Monthly Report")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":

        category = input("Enter category: ")
        amount = float(input("Enter amount: "))

        expenses.append([category, amount])

        print("Expense Added Successfully!")

    elif choice == "2":

        if len(expenses) == 0:
            print("No expenses recorded.")

        else:
            print("\nAll Expenses:")

            for item in expenses:
                print("Category:", item[0], "| Amount:", item[1])

    elif choice == "3":

        total = 0

        for item in expenses:
            total += item[1]

        print("\n====== MONTHLY REPORT ======")
        print("Number of Expenses:", len(expenses))
        print("Total Spending:", total)

    elif choice == "4":

        print("Thank you for using Expense Tracker!")
        break

    else:
        print("Invalid Choice")