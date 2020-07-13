#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebConnectionStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebConnectionStream"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& crlf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isRead() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& cnc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& readBuffer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& readBufferOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& readBufferSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& contentLength() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& totalRead() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int64_t> T& totalWritten() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& nextReadCalled() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& pendingReads() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& pendingWrites() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& pending() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& allowBuffering() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& sendChunked() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = uintptr_t> T& writeBuffer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& requestWritten() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& headers() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& headersSent() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = uintptr_t> T& locker() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& initRead() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& read_eof() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = bool> T& complete_request_written() {
		return *(T*)((uintptr_t)this + 0x5A);
	}
	template <typename T = int32_t> T& read_timeout() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& write_timeout() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = bool> T IsNtlmAuth() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6E058))(this);
	}
	template <typename T = void> T CheckResponseInBuffer() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6A704))(this);
	}
	template <typename T = uintptr_t> T get_Connection() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6E76C))(this);
	}
	template <typename T = int32_t> T get_ReadTimeout() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6E774))(this);
	}
	template <typename T = int32_t> T get_WriteTimeout() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6E77C))(this);
	}
	template <typename T = bool> T get_CompleteRequestWritten() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6E784))(this);
	}
	template <typename T = void> T set_SendChunked(bool value) {
		return ((T (*)(WebConnectionStream*, bool))(Il2CppBase() + 0x3E6E78C))(this, value);
	}
	template <typename T = void> T set_ReadBuffer(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(WebConnectionStream*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E6A6EC))(this, value);
	}
	template <typename T = void> T set_ReadBufferOffset(int32_t value) {
		return ((T (*)(WebConnectionStream*, int32_t))(Il2CppBase() + 0x3E6A6F4))(this, value);
	}
	template <typename T = void> T set_ReadBufferSize(int32_t value) {
		return ((T (*)(WebConnectionStream*, int32_t))(Il2CppBase() + 0x3E6A6FC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_WriteBuffer() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6E794))(this);
	}
	template <typename T = int32_t> T get_WriteBufferLength() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6E7C8))(this);
	}
	template <typename T = void> T ForceCompletion() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6A780))(this);
	}
	template <typename T = void> T CheckComplete() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6E7FC))(this);
	}
	template <typename T = void> T ReadAll() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6E250))(this);
	}
	template <typename T = void> T WriteCallbackWrapper(uintptr_t r) {
		return ((T (*)(WebConnectionStream*, uintptr_t))(Il2CppBase() + 0x3E6E850))(this, r);
	}
	template <typename T = void> T ReadCallbackWrapper(uintptr_t r) {
		return ((T (*)(WebConnectionStream*, uintptr_t))(Il2CppBase() + 0x3E6EA80))(this, r);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(WebConnectionStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E6EC68))(this, buffer, offset, size);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t cb, uintptr_t state) {
		return ((T (*)(WebConnectionStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E6EE94))(this, buffer, offset, size, cb, state);
	}
	template <typename T = int32_t> T EndRead(uintptr_t r) {
		return ((T (*)(WebConnectionStream*, uintptr_t))(Il2CppBase() + 0x3E6F2D0))(this, r);
	}
	template <typename T = void> T WriteRequestAsyncCB(uintptr_t r) {
		return ((T (*)(WebConnectionStream*, uintptr_t))(Il2CppBase() + 0x3E6F6AC))(this, r);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size, uintptr_t cb, uintptr_t state) {
		return ((T (*)(WebConnectionStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E6FA18))(this, buffer, offset, size, cb, state);
	}
	template <typename T = void> T CheckWriteOverflow(int64_t contentLength, int64_t totalWritten, int64_t size) {
		return ((T (*)(WebConnectionStream*, int64_t, int64_t, int64_t))(Il2CppBase() + 0x3E70338))(this, contentLength, totalWritten, size);
	}
	template <typename T = void> T EndWrite(uintptr_t r) {
		return ((T (*)(WebConnectionStream*, uintptr_t))(Il2CppBase() + 0x3E70A28))(this, r);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t size) {
		return ((T (*)(WebConnectionStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x3E70E20))(this, buffer, offset, size);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E71018))(this);
	}
	template <typename T = void> T SetHeaders(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(WebConnectionStream*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E7101C))(this, buffer);
	}
	template <typename T = bool> T get_RequestWritten() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E714FC))(this);
	}
	template <typename T = uintptr_t> T WriteRequestAsync(uintptr_t cb, uintptr_t state) {
		return ((T (*)(WebConnectionStream*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E70470))(this, cb, state);
	}
	template <typename T = void> T WriteHeaders() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E71374))(this);
	}
	template <typename T = void> T WriteRequest() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E7051C))(this);
	}
	template <typename T = void> T InternalClose() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E71504))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E71510))(this);
	}
	template <typename T = void> T KillBuffer() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E6FA0C))(this);
	}
	template <typename T = int64_t> T Seek(int64_t a, uintptr_t b) {
		return ((T (*)(WebConnectionStream*, int64_t, uintptr_t))(Il2CppBase() + 0x3E7186C))(this, a, b);
	}
	template <typename T = void> T SetLength(int64_t a) {
		return ((T (*)(WebConnectionStream*, int64_t))(Il2CppBase() + 0x3E71900))(this, a);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E71994))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E7199C))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E719C0))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E719E8))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(WebConnectionStream*))(Il2CppBase() + 0x3E71A7C))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(WebConnectionStream*, int64_t))(Il2CppBase() + 0x3E71B10))(this, value);
	}

};

}
