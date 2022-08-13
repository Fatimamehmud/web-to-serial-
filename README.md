# web-to-serial-
after we do chnge the text to know we need to move the arm with web to serial :
open a serial port :
![‏‏لقطة الشاشة (71)](https://user-images.githubusercontent.com/107954137/184500254-98e005f0-0d8e-42c5-b298-27e783826144.png)


after open we need to read from port:
const textDecoder = new TextDecoderStream();
const readableStreamClosed = port.readable.pipeTo(textDecoder.writable);
const reader = textDecoder.readable.getReader();
while (true) {
const { value, done } = await reader.read();
if (done) {
reader.releaseLock();
break;
}
console.log(value);
-for writing to the serial port:

const textEncoder = new TextEncoderStream();
const writableStreamClosed = textEncoder.readable.pipeTo(port.writable);
const writer = textEncoder.writable.getWriter();
await writer.write("يمين", "يسار");
-finally close the serial port:

await port.close();

