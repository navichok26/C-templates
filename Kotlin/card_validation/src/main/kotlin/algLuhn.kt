fun Int.isChet(): Boolean {
    return this%2 == 0
}

fun Int.sumNums(): Int {
    var sum = 0
    val st = this.toString()
    for (element in st){
        sum += element.toString().toInt()
    }
    return sum
}

fun algLuhn(cardNumber: String): Int {
    fun mapFun(index: Int, num: Int): Int {
        return if (index.isChet()) {
            val sw = num * 2
            if (sw > 9) sw.sumNums() else sw
        } else {
            num
        }
    }
    val number = cardNumber.reversed()
    val v: List<Int> = number.mapIndexed { inx, ch -> mapFun(inx, ch.toString().toInt())}
    var sum = 0
    for (element in v) {
        sum += element
    }
    return sum%10
}