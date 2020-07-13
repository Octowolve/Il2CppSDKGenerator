#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArabicFixerTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArabicFixerTool"));
	}

	template <typename T = bool> static T& showTashkeel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& combineTashkeel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& useHinduNumbers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveTashkeel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReturnTashkeel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIgnoredCharacter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLeadingLetter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFinishingLetter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMiddleLetter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppString*> static T RemoveTashkeel(Il2CppString* str, uintptr_t* tashkeelLocation) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x22CA594))(0, str, tashkeelLocation);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ReturnTashkeel(Il2CppArray<uintptr_t>* letters, Il2CppList<uintptr_t>* tashkeelLocation) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x22CB1B8))(0, letters, tashkeelLocation);
	}
	template <typename T = Il2CppString*> static T FixLine(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22CB4E8))(0, str);
	}
	template <typename T = bool> static T IsIgnoredCharacter(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x22CD3C8))(0, ch);
	}
	template <typename T = bool> static T IsLeadingLetter(Il2CppArray<uintptr_t>* letters, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x22CE2FC))(0, letters, index);
	}
	template <typename T = bool> static T IsFinishingLetter(Il2CppArray<uintptr_t>* letters, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x22CDEB0))(0, letters, index);
	}
	template <typename T = bool> static T IsMiddleLetter(Il2CppArray<uintptr_t>* letters, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x22CD610))(0, letters, index);
	}

};

}
