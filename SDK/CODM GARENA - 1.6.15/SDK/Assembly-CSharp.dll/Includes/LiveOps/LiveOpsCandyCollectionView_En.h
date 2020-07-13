#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsCandyCollectionViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsCandyCollectionView_En"));
	}

	template <typename T = uintptr_t> T& ProgressSlider() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelCurrentProgress() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ButtonGo() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemData() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LabelTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LabelDescribe() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LabelTitle() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Task() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& CurrentNum() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSliderValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValueByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsCandyCollectionViewEn*, uintptr_t))(Il2CppBase() + 0x34D8990))(this, activity);
	}
	template <typename T = float> T GetSliderValue() {
		return ((T (*)(LiveOpsCandyCollectionViewEn*))(Il2CppBase() + 0x34D8FF8))(this);
	}
	template <typename T = float> T GetValueByIndex(int32_t Index) {
		return ((T (*)(LiveOpsCandyCollectionViewEn*, int32_t))(Il2CppBase() + 0x34D9420))(this, Index);
	}
	template <typename T = int32_t> static T UpdateViewm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x34D94F8))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(LiveOpsCandyCollectionViewEn*, uintptr_t))(Il2CppBase() + 0x34D9550))(this, P0);
	}

};

}
