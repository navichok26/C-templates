fun main() {
    print("Enter your card number: ")
    val cardNum = readLine()!!
    try {
        cardNum.toInt()
    } catch (e: Exception) {
        println("Error!!! you input invalid value")
        return
    }

}