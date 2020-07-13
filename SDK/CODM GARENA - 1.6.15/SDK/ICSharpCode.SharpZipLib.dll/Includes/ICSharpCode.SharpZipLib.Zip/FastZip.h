#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class FastZip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "FastZip"));
	}

	template <typename T = bool> T& continueRunning_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffer_() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& zipFile_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& fileFilter_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& directoryFilter_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& overwrite_() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& confirmDelegate_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& restoreDateTimeOnExtract_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& restoreAttributesOnExtract_() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& createEmptyDirectories_() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> T& events_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& entryFactory_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extractNameTransform_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& useZip64_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& compressionLevel_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& password_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = bool> T get_CreateEmptyDirectories() {
		return ((T (*)(FastZip*))(Il2CppBase() + 0x4A7D2A8))(this);
	}
	template <typename T = bool> T get_RestoreAttributesOnExtract() {
		return ((T (*)(FastZip*))(Il2CppBase() + 0x4A7D2B0))(this);
	}
	template <typename T = void> T ExtractZip(Il2CppString* zipFileName, Il2CppString* targetDirectory, Il2CppString* fileFilter) {
		return ((T (*)(FastZip*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4A7D2B8))(this, zipFileName, targetDirectory, fileFilter);
	}
	template <typename T = void> T ExtractZip_1(Il2CppString* zipFileName, Il2CppString* targetDirectory, uintptr_t overwrite, uintptr_t confirmDelegate, Il2CppString* fileFilter, Il2CppString* directoryFilter, bool restoreDateTime, bool allowParentTraversal) {
		return ((T (*)(FastZip*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x4A7D324))(this, zipFileName, targetDirectory, overwrite, confirmDelegate, fileFilter, directoryFilter, restoreDateTime, allowParentTraversal);
	}
	template <typename T = void> T ExtractZip_2(uintptr_t inputStream, Il2CppString* targetDirectory, uintptr_t overwrite, uintptr_t confirmDelegate, Il2CppString* fileFilter, Il2CppString* directoryFilter, bool restoreDateTime, bool isStreamOwner, bool allowParentTraversal) {
		return ((T (*)(FastZip*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x4A7D3A0))(this, inputStream, targetDirectory, overwrite, confirmDelegate, fileFilter, directoryFilter, restoreDateTime, isStreamOwner, allowParentTraversal);
	}
	template <typename T = void> T ExtractFileEntry(uintptr_t entry, Il2CppString* targetName) {
		return ((T (*)(FastZip*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4A7E3A8))(this, entry, targetName);
	}
	template <typename T = void> T ExtractEntry(uintptr_t entry) {
		return ((T (*)(FastZip*, uintptr_t))(Il2CppBase() + 0x4A7DF10))(this, entry);
	}

};

}
