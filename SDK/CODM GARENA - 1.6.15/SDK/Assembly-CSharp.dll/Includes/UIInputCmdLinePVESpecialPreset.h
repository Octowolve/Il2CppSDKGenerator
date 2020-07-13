#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIInputCmdLinePVESpecialPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIInputCmdLinePVESpecialPreset"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& AddDataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
