#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class FastZipEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "FastZipEvents"));
	}

	template <typename T = uintptr_t> T& ProcessFile() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CompletedFile() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& DirectoryFailure() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& FileFailure() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& progressInterval_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T OnDirectoryFailure(Il2CppString* directory, uintptr_t e) {
		return ((T (*)(FastZipEvents*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4A7F11C))(this, directory, e);
	}
	template <typename T = bool> T OnFileFailure(Il2CppString* file, uintptr_t e) {
		return ((T (*)(FastZipEvents*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4A7F028))(this, file, e);
	}
	template <typename T = bool> T OnProcessFile(Il2CppString* file) {
		return ((T (*)(FastZipEvents*, Il2CppString*))(Il2CppBase() + 0x4A7E9C8))(this, file);
	}
	template <typename T = bool> T OnCompletedFile(Il2CppString* file) {
		return ((T (*)(FastZipEvents*, Il2CppString*))(Il2CppBase() + 0x4A7ED64))(this, file);
	}
	template <typename T = uintptr_t> T get_ProgressInterval() {
		return ((T (*)(FastZipEvents*))(Il2CppBase() + 0x4A7ED3C))(this);
	}

};

}
