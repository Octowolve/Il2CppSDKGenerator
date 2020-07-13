#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LuckyDrawSkinConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LuckyDrawSkinConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& BGName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& BtnBGName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& FrontBGName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ShowEffect() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& EffectAssetID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& VideoPath() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& VideoBGName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(LuckyDrawSkinConfig*))(Il2CppBase() + 0x37780FC))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(LuckyDrawSkinConfig*))(Il2CppBase() + 0x377819C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(LuckyDrawSkinConfig*, int32_t))(Il2CppBase() + 0x37781A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_BGName() {
		return ((T (*)(LuckyDrawSkinConfig*))(Il2CppBase() + 0x37781AC))(this);
	}
	template <typename T = void> T set_BGName(Il2CppString* value) {
		return ((T (*)(LuckyDrawSkinConfig*, Il2CppString*))(Il2CppBase() + 0x37781B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_BtnBGName() {
		return ((T (*)(LuckyDrawSkinConfig*))(Il2CppBase() + 0x37781BC))(this);
	}
	template <typename T = void> T set_BtnBGName(Il2CppString* value) {
		return ((T (*)(LuckyDrawSkinConfig*, Il2CppString*))(Il2CppBase() + 0x37781C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_FrontBGName() {
		return ((T (*)(LuckyDrawSkinConfig*))(Il2CppBase() + 0x37781CC))(this);
	}
	template <typename T = void> T set_FrontBGName(Il2CppString* value) {
		return ((T (*)(LuckyDrawSkinConfig*, Il2CppString*))(Il2CppBase() + 0x37781D4))(this, value);
	}
	template <typename T = bool> T get_ShowEffect() {
		return ((T (*)(LuckyDrawSkinConfig*))(Il2CppBase() + 0x37781DC))(this);
	}
	template <typename T = void> T set_ShowEffect(bool value) {
		return ((T (*)(LuckyDrawSkinConfig*, bool))(Il2CppBase() + 0x37781E4))(this, value);
	}
	template <typename T = int32_t> T get_EffectAssetID() {
		return ((T (*)(LuckyDrawSkinConfig*))(Il2CppBase() + 0x37781EC))(this);
	}
	template <typename T = void> T set_EffectAssetID(int32_t value) {
		return ((T (*)(LuckyDrawSkinConfig*, int32_t))(Il2CppBase() + 0x37781F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_VideoPath() {
		return ((T (*)(LuckyDrawSkinConfig*))(Il2CppBase() + 0x37781FC))(this);
	}
	template <typename T = void> T set_VideoPath(Il2CppString* value) {
		return ((T (*)(LuckyDrawSkinConfig*, Il2CppString*))(Il2CppBase() + 0x3778204))(this, value);
	}
	template <typename T = Il2CppString*> T get_VideoBGName() {
		return ((T (*)(LuckyDrawSkinConfig*))(Il2CppBase() + 0x377820C))(this);
	}
	template <typename T = void> T set_VideoBGName(Il2CppString* value) {
		return ((T (*)(LuckyDrawSkinConfig*, Il2CppString*))(Il2CppBase() + 0x3778214))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LuckyDrawSkinConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377821C))(this, bytes, position);
	}

};

}
