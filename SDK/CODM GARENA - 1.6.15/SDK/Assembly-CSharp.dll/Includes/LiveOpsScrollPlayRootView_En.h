#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LiveOpsScrollPlayRootViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LiveOpsScrollPlayRootView_En"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(LiveOpsScrollPlayRootViewEn*, Il2CppVector2))(Il2CppBase() + 0x432CB60))(this, delta);
	}

};

}
