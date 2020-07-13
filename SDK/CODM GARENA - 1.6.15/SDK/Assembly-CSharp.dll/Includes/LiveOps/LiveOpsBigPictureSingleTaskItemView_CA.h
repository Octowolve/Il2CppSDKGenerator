#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsBigPictureSingleTaskItemViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsBigPictureSingleTaskItemView_CA"));
	}

	template <typename T = uintptr_t> T& ObjGot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& AwardItem() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetItemState(uintptr_t award, bool bGot) {
		return ((T (*)(LiveOpsBigPictureSingleTaskItemViewCA*, uintptr_t, bool))(Il2CppBase() + 0x356FA90))(this, award, bGot);
	}

};

}
