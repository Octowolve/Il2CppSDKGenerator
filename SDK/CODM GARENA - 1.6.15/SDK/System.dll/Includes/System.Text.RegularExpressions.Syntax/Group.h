#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class Group
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "Group"));
	}


	template <typename T = void> T AppendExpression(uintptr_t e) {
		return ((T (*)(Group*, uintptr_t))(Il2CppBase() + 0x4AE3DAC))(this, e);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(Group*, uintptr_t, bool))(Il2CppBase() + 0x4AE1DCC))(this, cmp, reverse);
	}
	template <typename T = void> T GetWidth(uintptr_t* min, uintptr_t* max) {
		return ((T (*)(Group*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AE3DD4))(this, min, max);
	}
	template <typename T = uintptr_t> T GetAnchorInfo(bool reverse) {
		return ((T (*)(Group*, bool))(Il2CppBase() + 0x4AE40FC))(this, reverse);
	}

};

}
