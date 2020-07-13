#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsMainView"));
	}

	template <typename T = uintptr_t> T& BtnX() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ObjRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TopTabs() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTopTabBadge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateView(Il2CppList<uintptr_t>* topTabDatalist, int32_t curTopIndex) {
		return ((T (*)(CodLiveOpsMainView*, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x3544818))(this, topTabDatalist, curTopIndex);
	}
	template <typename T = void> T UpdateTopTabBadge() {
		return ((T (*)(CodLiveOpsMainView*))(Il2CppBase() + 0x354602C))(this);
	}

};

}
