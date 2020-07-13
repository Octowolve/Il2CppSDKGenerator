#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression.Streams {

class DeflaterOutputStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression.Streams", "DeflaterOutputStream"));
	}

	template <typename T = bool> T& IsStreamOwner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& password() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& cryptoTransform_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AESAuthCode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& deflater_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& baseOutputStream_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isClosed_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _aesRnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Finish() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A79FA0))(this);
	}
	template <typename T = bool> T get_IsStreamOwner() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7A378))(this);
	}
	template <typename T = bool> T get_CanPatchEntries() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7A380))(this);
	}
	template <typename T = Il2CppString*> T get_Password() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7A3B4))(this);
	}
	template <typename T = void> T EncryptBlock(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t length) {
		return ((T (*)(DeflaterOutputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A7A258))(this, buffer, offset, length);
	}
	template <typename T = void> T InitializePassword(Il2CppString* password) {
		return ((T (*)(DeflaterOutputStream*, Il2CppString*))(Il2CppBase() + 0x4A7A3BC))(this, password);
	}
	template <typename T = void> T InitializeAESPassword(uintptr_t entry, Il2CppString* rawPassword, Il2CppArray<uintptr_t>** salt, Il2CppArray<uintptr_t>** pwdVerifier) {
		return ((T (*)(DeflaterOutputStream*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x4A7A608))(this, entry, rawPassword, salt, pwdVerifier);
	}
	template <typename T = void> T Deflate() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7AA04))(this);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7AB70))(this);
	}
	template <typename T = bool> T get_CanSeek() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7AB78))(this);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7AB80))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7ABB4))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7ABE8))(this);
	}
	template <typename T = void> T set_Position(int64_t value) {
		return ((T (*)(DeflaterOutputStream*, int64_t))(Il2CppBase() + 0x4A7AC1C))(this, value);
	}
	template <typename T = int64_t> T Seek(int64_t offset, uintptr_t origin) {
		return ((T (*)(DeflaterOutputStream*, int64_t, uintptr_t))(Il2CppBase() + 0x4A7ACC4))(this, offset, origin);
	}
	template <typename T = void> T SetLength(int64_t value) {
		return ((T (*)(DeflaterOutputStream*, int64_t))(Il2CppBase() + 0x4A7AD6C))(this, value);
	}
	template <typename T = int32_t> T ReadByte() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7AE14))(this);
	}
	template <typename T = int32_t> T Read(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(DeflaterOutputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A7AEBC))(this, buffer, offset, count);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7AF64))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(DeflaterOutputStream*, bool))(Il2CppBase() + 0x4A7AFBC))(this, disposing);
	}
	template <typename T = void> T GetAuthCodeIfAES() {
		return ((T (*)(DeflaterOutputStream*))(Il2CppBase() + 0x4A7B164))(this);
	}
	template <typename T = void> T WriteByte(unsigned char value) {
		return ((T (*)(DeflaterOutputStream*, unsigned char))(Il2CppBase() + 0x4A7B254))(this, value);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(DeflaterOutputStream*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A7B344))(this, buffer, offset, count);
	}

};

}
