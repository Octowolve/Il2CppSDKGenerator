#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementPart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementPart"));
	}

	template <typename T = Il2CppString*> T& IEFuncName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& ProgressFrom() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& ProgressTo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& DigitFrom() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& DigitTo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& RemainProtectionExp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& UniformColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LabelFinalExp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& LabelExpAdd() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
