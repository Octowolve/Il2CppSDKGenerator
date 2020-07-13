#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class StreamWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "StreamWriter"));
	}

	template <typename T = uintptr_t> T& internalEncoding() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& internalStream() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& iflush() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& byte_buf() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& byte_pos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& decode_buf() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& decode_pos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& DisposedAlready() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& preamble_done() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> static T& Null() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Initialize(uintptr_t encoding, int32_t bufferSize) {
		return ((T (*)(StreamWriter*, uintptr_t, int32_t))(Il2CppBase() + 0x400521C))(this, encoding, bufferSize);
	}
	template <typename T = void> T set_AutoFlush(bool value) {
		return ((T (*)(StreamWriter*, bool))(Il2CppBase() + 0x4005734))(this, value);
	}
	template <typename T = uintptr_t> T get_BaseStream() {
		return ((T (*)(StreamWriter*))(Il2CppBase() + 0x4005750))(this);
	}
	template <typename T = uintptr_t> T get_Encoding() {
		return ((T (*)(StreamWriter*))(Il2CppBase() + 0x4005758))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(StreamWriter*, bool))(Il2CppBase() + 0x4005760))(this, disposing);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(StreamWriter*))(Il2CppBase() + 0x400599C))(this);
	}
	template <typename T = void> T FlushBytes() {
		return ((T (*)(StreamWriter*))(Il2CppBase() + 0x4005B24))(this);
	}
	template <typename T = void> T Decode() {
		return ((T (*)(StreamWriter*))(Il2CppBase() + 0x4005A9C))(this);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(StreamWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4005BF4))(this, buffer, index, count);
	}
	template <typename T = void> T LowLevelWrite(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(StreamWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4005E34))(this, buffer, index, count);
	}
	template <typename T = void> T LowLevelWrite_1(Il2CppString* s) {
		return ((T (*)(StreamWriter*, Il2CppString*))(Il2CppBase() + 0x4005EF0))(this, s);
	}
	template <typename T = void> T Write_1(char value) {
		return ((T (*)(StreamWriter*, char))(Il2CppBase() + 0x400601C))(this, value);
	}
	template <typename T = void> T Write_2(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(StreamWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x400616C))(this, buffer);
	}
	template <typename T = void> T Write_3(Il2CppString* value) {
		return ((T (*)(StreamWriter*, Il2CppString*))(Il2CppBase() + 0x4006278))(this, value);
	}
	template <typename T = void> T Close() {
		return ((T (*)(StreamWriter*))(Il2CppBase() + 0x400636C))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(StreamWriter*))(Il2CppBase() + 0x4006380))(this);
	}

};

}
