#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class WindowsNameTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "WindowsNameTransform"));
	}

	template <typename T = Il2CppString*> T& _baseDirectory() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _trimIncomingPaths() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = char> T& _replacementChar() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& _allowParentTraversal() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& InvalidEntryChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T set_BaseDirectory(Il2CppString* value) {
		return ((T (*)(WindowsNameTransform*, Il2CppString*))(Il2CppBase() + 0x4A7F364))(this, value);
	}
	template <typename T = void> T set_AllowParentTraversal(bool value) {
		return ((T (*)(WindowsNameTransform*, bool))(Il2CppBase() + 0x4A7F46C))(this, value);
	}
	template <typename T = Il2CppString*> T TransformDirectory(Il2CppString* name) {
		return ((T (*)(WindowsNameTransform*, Il2CppString*))(Il2CppBase() + 0x4A7F474))(this, name);
	}
	template <typename T = Il2CppString*> T TransformFile(Il2CppString* name) {
		return ((T (*)(WindowsNameTransform*, Il2CppString*))(Il2CppBase() + 0x4A7F628))(this, name);
	}
	template <typename T = Il2CppString*> static T MakeValidName(Il2CppString* name, char replacement) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x4A7F8B0))(0, name, replacement);
	}

};

}
