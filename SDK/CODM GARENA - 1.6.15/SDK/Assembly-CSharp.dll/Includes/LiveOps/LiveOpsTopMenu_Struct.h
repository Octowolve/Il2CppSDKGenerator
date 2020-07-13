#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsTopMenuStruct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsTopMenu_Struct"));
	}

	template <typename T = int32_t> T& TopTabNum() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LeftTabNumList() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppList<bool>*> T& bShowPointList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bNew() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
