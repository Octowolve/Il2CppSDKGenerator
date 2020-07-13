#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRNewGuideConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRNewGuideConfigConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& BRNewGuideItemType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RepeatTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& LifeCycle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_GuideText() {
		return *(T*)((uintptr_t)this + 0x20);
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
		return ((T (*)(BRNewGuideConfigConfig*))(Il2CppBase() + 0x2D51110))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(BRNewGuideConfigConfig*))(Il2CppBase() + 0x2D511B0))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(BRNewGuideConfigConfig*, int32_t))(Il2CppBase() + 0x2D511B8))(this, value);
	}
	template <typename T = int32_t> T get_BRNewGuideItemType() {
		return ((T (*)(BRNewGuideConfigConfig*))(Il2CppBase() + 0x2D511C0))(this);
	}
	template <typename T = void> T set_BRNewGuideItemType(int32_t value) {
		return ((T (*)(BRNewGuideConfigConfig*, int32_t))(Il2CppBase() + 0x2D511C8))(this, value);
	}
	template <typename T = int32_t> T get_RepeatTime() {
		return ((T (*)(BRNewGuideConfigConfig*))(Il2CppBase() + 0x2D511D0))(this);
	}
	template <typename T = void> T set_RepeatTime(int32_t value) {
		return ((T (*)(BRNewGuideConfigConfig*, int32_t))(Il2CppBase() + 0x2D511D8))(this, value);
	}
	template <typename T = int32_t> T get_LifeCycle() {
		return ((T (*)(BRNewGuideConfigConfig*))(Il2CppBase() + 0x2D511E0))(this);
	}
	template <typename T = void> T set_LifeCycle(int32_t value) {
		return ((T (*)(BRNewGuideConfigConfig*, int32_t))(Il2CppBase() + 0x2D511E8))(this, value);
	}
	template <typename T = float> T get_Time() {
		return ((T (*)(BRNewGuideConfigConfig*))(Il2CppBase() + 0x2D511F0))(this);
	}
	template <typename T = void> T set_Time(float value) {
		return ((T (*)(BRNewGuideConfigConfig*, float))(Il2CppBase() + 0x2D511F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_GuideText() {
		return ((T (*)(BRNewGuideConfigConfig*))(Il2CppBase() + 0x2D51200))(this);
	}
	template <typename T = void> T set_LOCID_GuideText(Il2CppString* value) {
		return ((T (*)(BRNewGuideConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D51208))(this, value);
	}
	template <typename T = Il2CppString*> T get_GuideText() {
		return ((T (*)(BRNewGuideConfigConfig*))(Il2CppBase() + 0x2D51210))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRNewGuideConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D51220))(this, bytes, position);
	}

};

}
