#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression.Streams {

class InflaterInputStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression.Streams", "InflaterInputStream"));
	}

	template <typename T = bool> T& IsStreamOwner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& inf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& inputBuffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& baseInputStream() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isClosed() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_IsStreamOwner() {
		return ((T (*)(InflaterInputStream*))(Il2CppBase() + 0x4A7B8AC))(this);
	}
	template <typename T = void> T Fill() {
		return ((T (*)(InflaterInputStream*))(Il2CppBase() + 0x4A7B8B4))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(InflaterInputStream*))(Il2CppBase() + 0x4A7B9AC))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(InflaterInputStream*))(Il2CppBase() + 0x4A7B9E0))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(InflaterInputStream*))(Il2CppBase() + 0x4A7B9E8))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(InflaterInputStream*))(Il2CppBase() + 0x4A7B9F0))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(InflaterInputStream*))(Il2CppBase() + 0x4A7BA98))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(InflaterInputStream*, int64_t))(Il2CppBase() + 0x4A7BACC))(this, value);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(InflaterInputStream*))(Il2CppBase() + 0x4A7BB74))(this);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(InflaterInputStream*, int64_t, uintptr_t))(Il2CppBase() + 0x4A7BBA8))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(InflaterInputStream*, int64_t))(Il2CppBase() + 0x4A7BC50))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(InflaterInputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A7BCF8))(this, buffer, offset, count);
	}
	template <typename T = void> T WriteByte(unsigned char value) {
		return ((T (*)(InflaterInputStream*, unsigned char))(Il2CppBase() + 0x4A7BDA0))(this, value);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(InflaterInputStream*, bool))(Il2CppBase() + 0x4A7BE48))(this, disposing);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(InflaterInputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A7BE98))(this, buffer, offset, count);
	}

};

}
