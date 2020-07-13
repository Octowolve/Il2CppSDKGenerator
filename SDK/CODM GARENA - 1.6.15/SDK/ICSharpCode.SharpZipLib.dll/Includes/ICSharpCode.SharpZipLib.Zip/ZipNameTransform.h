#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class ZipNameTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "ZipNameTransform"));
	}

	template <typename T = Il2CppString*> T& trimPrefix_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& InvalidEntryChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& InvalidEntryCharsRelaxed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T TransformDirectory(Il2CppString* name) {
		return ((T (*)(ZipNameTransform*, Il2CppString*))(Il2CppBase() + 0x4A876F0))(this, name);
	}
	template <typename T = Il2CppString*> T TransformFile(Il2CppString* name) {
		return ((T (*)(ZipNameTransform*, Il2CppString*))(Il2CppBase() + 0x4A87874))(this, name);
	}
	template <typename T = Il2CppString*> static T MakeValidName(Il2CppString* name, char replacement) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x4A87B70))(0, name, replacement);
	}
	template <typename T = bool> static T IsValidName(Il2CppString* name, bool relaxed) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4A85978))(0, name, relaxed);
	}

};

}
