#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsCandyCollectionItemViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsCandyCollectionItemView_En"));
	}

	template <typename T = uintptr_t> T& LabelTargetValue() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SpriteTargetValue() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ReceiveItem() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ObjGot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ObjGoScene() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ObjRedPoint() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnObjClaimClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(LiveOpsCandyCollectionItemViewEn*, uintptr_t))(Il2CppBase() + 0x35715B8))(this, data);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LiveOpsCandyCollectionItemViewEn*))(Il2CppBase() + 0x357190C))(this);
	}
	template <typename T = void> T OnObjClaimClick(uintptr_t obj) {
		return ((T (*)(LiveOpsCandyCollectionItemViewEn*, uintptr_t))(Il2CppBase() + 0x3571A30))(this, obj);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LiveOpsCandyCollectionItemViewEn*))(Il2CppBase() + 0x3571C00))(this);
	}

};

}
