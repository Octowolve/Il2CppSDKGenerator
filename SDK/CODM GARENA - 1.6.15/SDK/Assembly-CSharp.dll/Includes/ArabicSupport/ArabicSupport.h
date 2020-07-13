#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ArabicSupport {

class ArabicSupport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ArabicSupport", "ArabicSupport"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Convert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertEachLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsArabic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> static T Convert(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22CF7E0))(0, str);
	}
	template <typename T = Il2CppString*> static T ConvertEachLine(Il2CppString* line) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22CFA74))(0, line);
	}
	template <typename T = void> static T PushStr(int32_t start, int32_t end, Il2CppString* str, Il2CppList<Il2CppString*>* buffer, bool isArabic) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppString*, Il2CppList<Il2CppString*>*, bool))(Il2CppBase() + 0x22D013C))(0, start, end, str, buffer, isArabic);
	}
	template <typename T = bool> static T IsArabic(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x22D005C))(0, ch);
	}
	template <typename T = bool> static T IsSymbol(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x22CFFA0))(0, ch);
	}

};

}
