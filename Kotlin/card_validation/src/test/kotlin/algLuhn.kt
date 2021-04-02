import org.junit.Test
import kotlin.test.assertEquals

class algLuhn {
    @Test
    fun test1() {
        val cardNum = "5469640013106998"
        val num = algLuhn(cardNum.substring(0, cardNum.lastIndex))
        print(num)
        assertEquals(cardNum[cardNum.lastIndex].toString().toInt(), 10-num)
    }
}