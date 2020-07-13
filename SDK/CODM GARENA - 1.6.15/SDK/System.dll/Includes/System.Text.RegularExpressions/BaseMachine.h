#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class BaseMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "BaseMachine"));
	}

	template <typename T = bool> T& needs_groups_or_captures() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T Replace(uintptr_t regex, Il2CppString* input, Il2CppString* replacement, int32_t count, int32_t startat) {
		return ((T (*)(BaseMachine*, uintptr_t, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3E8B450))(this, regex, input, replacement, count, startat);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Split(uintptr_t regex, Il2CppString* input, int32_t count, int32_t startat) {
		return ((T (*)(BaseMachine*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3E8BCAC))(this, regex, input, count, startat);
	}
	template <typename T = uintptr_t> T Scan(uintptr_t regex, Il2CppString* text, int32_t start, int32_t end) {
		return ((T (*)(BaseMachine*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3E8C0F4))(this, regex, text, start, end);
	}
	template <typename T = Il2CppString*> T LTRReplace(uintptr_t regex, Il2CppString* input, uintptr_t evaluator, int32_t count, int32_t startat) {
		return ((T (*)(BaseMachine*, uintptr_t, Il2CppString*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3E8C19C))(this, regex, input, evaluator, count, startat);
	}
	template <typename T = Il2CppString*> T LTRReplace_1(uintptr_t regex, Il2CppString* input, uintptr_t evaluator, int32_t count, int32_t startat, bool needs_groups_or_captures) {
		return ((T (*)(BaseMachine*, uintptr_t, Il2CppString*, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x3E8BA04))(this, regex, input, evaluator, count, startat, needs_groups_or_captures);
	}
	template <typename T = Il2CppString*> T RTLReplace(uintptr_t regex, Il2CppString* input, uintptr_t evaluator, int32_t count, int32_t startat) {
		return ((T (*)(BaseMachine*, uintptr_t, Il2CppString*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3E8B600))(this, regex, input, evaluator, count, startat);
	}

};

}
