#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class ZipEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "ZipEntry"));
	}

	template <typename T = uintptr_t> T& known() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& externalFileAttributes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint16_t> T& versionMadeBy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& size() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& compressedSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint16_t> T& versionToExtract() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& crc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& dosTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& extra() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& comment() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& flags() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& zipFileIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& offset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& forceZip64_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = unsigned char> T& cryptoCheckValue_() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = int32_t> T& _aesVer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _aesEncryptionStrength() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = bool> T get_HasCrc() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80728))(this);
	}
	template <typename T = bool> T get_IsCrypted() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80738))(this);
	}
	template <typename T = void> T set_IsCrypted(bool value) {
		return ((T (*)(ZipEntry*, bool))(Il2CppBase() + 0x4A80744))(this, value);
	}
	template <typename T = void> T set_IsUnicodeText(bool value) {
		return ((T (*)(ZipEntry*, bool))(Il2CppBase() + 0x4A8070C))(this, value);
	}
	template <typename T = unsigned char> T get_CryptoCheckValue() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80760))(this);
	}
	template <typename T = void> T set_CryptoCheckValue(unsigned char value) {
		return ((T (*)(ZipEntry*, unsigned char))(Il2CppBase() + 0x4A80768))(this, value);
	}
	template <typename T = int32_t> T get_Flags() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80770))(this);
	}
	template <typename T = void> T set_Flags(int32_t value) {
		return ((T (*)(ZipEntry*, int32_t))(Il2CppBase() + 0x4A80778))(this, value);
	}
	template <typename T = int64_t> T get_ZipFileIndex() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80780))(this);
	}
	template <typename T = void> T set_ZipFileIndex(int64_t value) {
		return ((T (*)(ZipEntry*, int64_t))(Il2CppBase() + 0x4A80788))(this, value);
	}
	template <typename T = int64_t> T get_Offset() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80798))(this);
	}
	template <typename T = void> T set_Offset(int64_t value) {
		return ((T (*)(ZipEntry*, int64_t))(Il2CppBase() + 0x4A807A0))(this, value);
	}
	template <typename T = int32_t> T get_ExternalFileAttributes() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A7F010))(this);
	}
	template <typename T = void> T set_ExternalFileAttributes(int32_t value) {
		return ((T (*)(ZipEntry*, int32_t))(Il2CppBase() + 0x4A807B0))(this, value);
	}
	template <typename T = bool> T get_IsDOSEntry() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A7EFE8))(this);
	}
	template <typename T = bool> T HasDosAttributes(int32_t attributes) {
		return ((T (*)(ZipEntry*, int32_t))(Il2CppBase() + 0x4A807D0))(this, attributes);
	}
	template <typename T = int32_t> T get_HostSystem() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A807C4))(this);
	}
	template <typename T = int32_t> T get_Version() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80814))(this);
	}
	template <typename T = void> T ForceZip64() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80930))(this);
	}
	template <typename T = bool> T IsZip64Forced() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A8093C))(this);
	}
	template <typename T = bool> T get_LocalHeaderRequiresZip64() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80944))(this);
	}
	template <typename T = bool> T get_CentralHeaderRequiresZip64() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A808EC))(this);
	}
	template <typename T = int64_t> T get_DosTime() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A809EC))(this);
	}
	template <typename T = void> T set_DosTime(int64_t value) {
		return ((T (*)(ZipEntry*, int64_t))(Il2CppBase() + 0x4A80A04))(this, value);
	}
	template <typename T = uintptr_t> T get_DateTime() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A7EE38))(this);
	}
	template <typename T = void> T set_DateTime(uintptr_t value) {
		return ((T (*)(ZipEntry*, uintptr_t))(Il2CppBase() + 0x4A802AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A7DF08))(this);
	}
	template <typename T = int64_t> T get_Size() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A7ED48))(this);
	}
	template <typename T = void> T set_Size(int64_t value) {
		return ((T (*)(ZipEntry*, int64_t))(Il2CppBase() + 0x4A80A18))(this, value);
	}
	template <typename T = int64_t> T get_CompressedSize() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80A34))(this);
	}
	template <typename T = void> T set_CompressedSize(int64_t value) {
		return ((T (*)(ZipEntry*, int64_t))(Il2CppBase() + 0x4A80A50))(this, value);
	}
	template <typename T = int64_t> T get_Crc() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80A6C))(this);
	}
	template <typename T = void> T set_Crc(int64_t value) {
		return ((T (*)(ZipEntry*, int64_t))(Il2CppBase() + 0x4A80A8C))(this, value);
	}
	template <typename T = uintptr_t> T get_CompressionMethod() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80B00))(this);
	}
	template <typename T = void> T set_CompressionMethod(uintptr_t value) {
		return ((T (*)(ZipEntry*, uintptr_t))(Il2CppBase() + 0x4A80B08))(this, value);
	}
	template <typename T = uintptr_t> T get_CompressionMethodForHeader() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80BDC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ExtraData() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80C00))(this);
	}
	template <typename T = void> T set_ExtraData(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZipEntry*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A80C08))(this, value);
	}
	template <typename T = int32_t> T get_AESKeySize() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A7A8BC))(this);
	}
	template <typename T = unsigned char> T get_AESEncryptionStrength() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80D44))(this);
	}
	template <typename T = int32_t> T get_AESSaltLen() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A7A8A0))(this);
	}
	template <typename T = int32_t> T get_AESOverheadSize() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A80D4C))(this);
	}
	template <typename T = void> T ProcessExtraData(bool localHeader) {
		return ((T (*)(ZipEntry*, bool))(Il2CppBase() + 0x4A80D6C))(this, localHeader);
	}
	template <typename T = uintptr_t> T GetDateTime(uintptr_t extraData) {
		return ((T (*)(ZipEntry*, uintptr_t))(Il2CppBase() + 0x4A81158))(this, extraData);
	}
	template <typename T = void> T ProcessAESExtraData(uintptr_t extraData) {
		return ((T (*)(ZipEntry*, uintptr_t))(Il2CppBase() + 0x4A8139C))(this, extraData);
	}
	template <typename T = Il2CppString*> T get_Comment() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A816AC))(this);
	}
	template <typename T = void> T set_Comment(Il2CppString* value) {
		return ((T (*)(ZipEntry*, Il2CppString*))(Il2CppBase() + 0x4A816B4))(this, value);
	}
	template <typename T = bool> T get_IsDirectory() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A7E2EC))(this);
	}
	template <typename T = bool> T get_IsFile() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A7DEAC))(this);
	}
	template <typename T = bool> T IsCompressionMethodSupported() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A7F104))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ZipEntry*))(Il2CppBase() + 0x4A81798))(this);
	}
	template <typename T = bool> static T IsCompressionMethodSupported_1(uintptr_t method) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A80BC8))(0, method);
	}
	template <typename T = Il2CppString*> static T CleanName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4A803D0))(0, name);
	}

};

}
