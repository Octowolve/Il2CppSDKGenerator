#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsQuestionNaireViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsQuestionNaireView_En"));
	}

	template <typename T = uintptr_t> T& ContainerGo() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ContainerReward() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ItemTemplates() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnReward() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BtnGo() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ObjRewarded() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ObjTimeOut() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftPicIconUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Update() {
		return ((T (*)(LiveOpsQuestionNaireViewEn*))(Il2CppBase() + 0x351E618))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsQuestionNaireViewEn*, uintptr_t))(Il2CppBase() + 0x351EDBC))(this, activity);
	}
	template <typename T = void> T GetLeftPicIconUrl(uintptr_t activity, uintptr_t* outSpriteIcon, uintptr_t* outSpriteIconUrl) {
		return ((T (*)(LiveOpsQuestionNaireViewEn*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x351F43C))(this, activity, outSpriteIcon, outSpriteIconUrl);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(LiveOpsQuestionNaireViewEn*))(Il2CppBase() + 0x351F5D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(LiveOpsQuestionNaireViewEn*, uintptr_t))(Il2CppBase() + 0x351F5D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetLeftPicIconUrl(uintptr_t P0, uintptr_t* P1, uintptr_t* P2) {
		return ((T (*)(LiveOpsQuestionNaireViewEn*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x351F5E0))(this, P0, P1, P2);
	}

};

}
