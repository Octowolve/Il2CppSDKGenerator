#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMultitaskSingleViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMultitaskSingleView_CA"));
	}

	template <typename T = uintptr_t> T& LineSprite() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& LineSpriteButtom() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& FinishAwardBG() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& UnFinishAwardBG() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& FinishWidget() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& TaskProgressTitle() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& TaskTitle() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& ProgressScrollView() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& ScrollViewContainer() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& ScrollViewCollision() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = void*> T& UpdateListCallFun() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& ProgressWidthDiff() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& bAdaptationProgress() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppVector3> T& ProgressScrollViewPos() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& progressScrollViewClip() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& m_ResetScrollViewPosTime() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgreassScrollViewWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetScrollViewPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRewardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTaskList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350DAC4))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350DC1C))(this);
	}
	template <typename T = int32_t> T GetProgreassScrollViewWidth() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350DCD4))(this);
	}
	template <typename T = void> T ResetScrollViewPos() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350DE94))(this);
	}
	template <typename T = void> T UpdateRewardList() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350E0C8))(this);
	}
	template <typename T = void> T UpdateTaskList() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350E9E4))(this);
	}
	template <typename T = void> T UpdateRewardListm__0() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350EAB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350EAB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350EABC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRewardList() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350EAC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateTaskList() {
		return ((T (*)(LiveOpsMultitaskSingleViewCA*))(Il2CppBase() + 0x350EF94))(this);
	}

};

}
