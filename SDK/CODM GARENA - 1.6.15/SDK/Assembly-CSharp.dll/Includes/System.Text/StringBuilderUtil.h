#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class StringBuilderUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "System.Text", "StringBuilderUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_AppendFormatHelper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T AppendFormatHelper(uintptr_t sb, Il2CppString* format, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F3CA18))(0, sb, format, args);
	}
	template <typename T = void> static T FormatError() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F3D2B8))(0);
	}

};

}
