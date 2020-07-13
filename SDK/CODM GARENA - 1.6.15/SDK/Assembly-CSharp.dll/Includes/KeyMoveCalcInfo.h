#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyMoveCalcInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KeyMoveCalcInfo"));
	}

	template <typename T = int32_t> T& KeyIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<int32_t>*> T& CalcIndexList() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& TopNum() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& BottomNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& CurIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& BestIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& BestOffsetTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
