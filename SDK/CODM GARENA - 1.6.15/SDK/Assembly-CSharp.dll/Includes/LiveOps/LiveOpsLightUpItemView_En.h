#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsLightUpItemViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsLightUpItemView_En"));
	}

	template <typename T = uintptr_t> T& SpriteIconGray() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SpriteIconNorma() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ObjRedPoint() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteArrive() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteNotArrive() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LavelValue() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SpriteReceived() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ObjGoScene() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint32_t> T& DZID() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& m_leftNum() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_topNum() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_data() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppVector3> T& mCurrencyScale() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& m_IsVaLid() {
		return *(T*)((uintptr_t)this + 0xC4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnObjGoSceneClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValueToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetData(uintptr_t data, int32_t index, int32_t leftNum, int32_t topNum) {
		return ((T (*)(LiveOpsLightUpItemViewEn*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x34EFFAC))(this, data, index, leftNum, topNum);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LiveOpsLightUpItemViewEn*))(Il2CppBase() + 0x34F0EC0))(this);
	}
	template <typename T = void> T OnObjGoSceneClick(uintptr_t obj) {
		return ((T (*)(LiveOpsLightUpItemViewEn*, uintptr_t))(Il2CppBase() + 0x34F0FE4))(this, obj);
	}
	template <typename T = Il2CppString*> T GetValueToString(int32_t ve) {
		return ((T (*)(LiveOpsLightUpItemViewEn*, int32_t))(Il2CppBase() + 0x34F0C68))(this, ve);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LiveOpsLightUpItemViewEn*))(Il2CppBase() + 0x34F1308))(this);
	}

};

}
