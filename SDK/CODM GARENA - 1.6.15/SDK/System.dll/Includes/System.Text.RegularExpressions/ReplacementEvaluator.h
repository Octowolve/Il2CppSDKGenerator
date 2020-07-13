#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class ReplacementEvaluator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "ReplacementEvaluator"));
	}

	template <typename T = uintptr_t> T& regex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& n_pieces() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pieces() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& replacement() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T Evaluate(uintptr_t match) {
		return ((T (*)(ReplacementEvaluator*, uintptr_t))(Il2CppBase() + 0x4ADEF68))(this, match);
	}
	template <typename T = void> T EvaluateAppend(uintptr_t match, uintptr_t sb) {
		return ((T (*)(ReplacementEvaluator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ADF03C))(this, match, sb);
	}
	template <typename T = bool> T get_NeedsGroupsOrCaptures() {
		return ((T (*)(ReplacementEvaluator*))(Il2CppBase() + 0x4ADF238))(this);
	}
	template <typename T = void> T Ensure(int32_t size) {
		return ((T (*)(ReplacementEvaluator*, int32_t))(Il2CppBase() + 0x4ADF248))(this, size);
	}
	template <typename T = void> T AddFromReplacement(int32_t start, int32_t end) {
		return ((T (*)(ReplacementEvaluator*, int32_t, int32_t))(Il2CppBase() + 0x4ADF364))(this, start, end);
	}
	template <typename T = void> T AddInt(int32_t i) {
		return ((T (*)(ReplacementEvaluator*, int32_t))(Il2CppBase() + 0x4ADF40C))(this, i);
	}
	template <typename T = void> T Compile() {
		return ((T (*)(ReplacementEvaluator*))(Il2CppBase() + 0x4ADEE18))(this);
	}
	template <typename T = int32_t> T CompileTerm(uintptr_t ptr) {
		return ((T (*)(ReplacementEvaluator*, uintptr_t))(Il2CppBase() + 0x4ADF470))(this, ptr);
	}

};

}
