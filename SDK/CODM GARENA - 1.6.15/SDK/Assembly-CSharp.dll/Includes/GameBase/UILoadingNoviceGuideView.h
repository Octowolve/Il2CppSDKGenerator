#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class UILoadingNoviceGuideView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "UILoadingNoviceGuideView"));
	}

	template <typename T = uintptr_t> T& Texture_1422x852() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TextureNoviceGuide() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_Height() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ContainerTips() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TipItems() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& Default_Height() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> static T& LabelToBorder_Left() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LabelToBorder_Right() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LabelToBorder_Bottom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LabelToBorder_Top() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__Set1422x852Size() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetNoviceGuidePicSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetNoviceGuidTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T UpdateView(uintptr_t loadingData) {
		return ((T (*)(UILoadingNoviceGuideView*, uintptr_t))(Il2CppBase() + 0x27D44AC))(this, loadingData);
	}
	template <typename T = void> T _Set1422x852Size() {
		return ((T (*)(UILoadingNoviceGuideView*))(Il2CppBase() + 0x27D4D34))(this);
	}
	template <typename T = void> T _SetNoviceGuidePicSize() {
		return ((T (*)(UILoadingNoviceGuideView*))(Il2CppBase() + 0x27D4F0C))(this);
	}
	template <typename T = Il2CppVector3> T GetOffset(uintptr_t pivot) {
		return ((T (*)(UILoadingNoviceGuideView*, uintptr_t))(Il2CppBase() + 0x27D5DE0))(this, pivot);
	}
	template <typename T = void> T _SetNoviceGuidTips(Il2CppList<uintptr_t>* tipsList) {
		return ((T (*)(UILoadingNoviceGuideView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x27D540C))(this, tipsList);
	}

};

}
