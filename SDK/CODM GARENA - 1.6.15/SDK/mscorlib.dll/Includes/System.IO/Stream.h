#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class Stream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "Stream"));
	}

	template <typename T = uintptr_t> static T& Null() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_CanRead() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(Stream*, int64_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x4002D90))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(Stream*, bool))(Il2CppBase() + 0x4002DA0))(this, disposing);
	}
	template <typename T = void> T Close() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x4002DA4))(this);
	}
	template <typename T = int32_t> T get_ReadTimeout() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x4002DB8))(this);
	}
	template <typename T = int32_t> T get_WriteTimeout() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x4002E6C))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>** buffer, int32_t offset, int32_t count) {
		return ((T (*)(Stream*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x0))(this, buffer, offset, count);
	}
	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(Stream*))(Il2CppBase() + 0x4002F20))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(Stream*, int64_t, uintptr_t))(Il2CppBase() + 0x0))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(Stream*, int64_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(Stream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, buffer, offset, count);
	}
	template <typename T = void> T WriteByte(unsigned char value) {
		return ((T (*)(Stream*, unsigned char))(Il2CppBase() + 0x400301C))(this, value);
	}
	template <typename T = uintptr_t> T BeginRead(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t callback, uintptr_t state) {
		return ((T (*)(Stream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FFA388))(this, buffer, offset, count, callback, state);
	}
	template <typename T = uintptr_t> T BeginWrite(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count, uintptr_t callback, uintptr_t state) {
		return ((T (*)(Stream*, Il2CppArray<uintptr_t>*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FFB460))(this, buffer, offset, count, callback, state);
	}
	template <typename T = int32_t> T EndRead(uintptr_t asyncResult) {
		return ((T (*)(Stream*, uintptr_t))(Il2CppBase() + 0x3FFA884))(this, asyncResult);
	}
	template <typename T = void> T EndWrite(uintptr_t asyncResult) {
		return ((T (*)(Stream*, uintptr_t))(Il2CppBase() + 0x3FFBCB0))(this, asyncResult);
	}

};

}
