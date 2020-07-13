#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class MPNewGuideConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "MPNewGuideConfigConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& NewGuideItemType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RepeatTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& IconName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_GuideText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_GuideText_2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_GuideText_3() {
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
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C270))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C310))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(MPNewGuideConfigConfig*, int32_t))(Il2CppBase() + 0x377C318))(this, value);
	}
	template <typename T = int32_t> T get_NewGuideItemType() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C320))(this);
	}
	template <typename T = void> T set_NewGuideItemType(int32_t value) {
		return ((T (*)(MPNewGuideConfigConfig*, int32_t))(Il2CppBase() + 0x377C328))(this, value);
	}
	template <typename T = int32_t> T get_RepeatTime() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C330))(this);
	}
	template <typename T = void> T set_RepeatTime(int32_t value) {
		return ((T (*)(MPNewGuideConfigConfig*, int32_t))(Il2CppBase() + 0x377C338))(this, value);
	}
	template <typename T = float> T get_Time() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C340))(this);
	}
	template <typename T = void> T set_Time(float value) {
		return ((T (*)(MPNewGuideConfigConfig*, float))(Il2CppBase() + 0x377C348))(this, value);
	}
	template <typename T = Il2CppString*> T get_IconName() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C350))(this);
	}
	template <typename T = void> T set_IconName(Il2CppString* value) {
		return ((T (*)(MPNewGuideConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377C358))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_GuideText() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C360))(this);
	}
	template <typename T = void> T set_LOCID_GuideText(Il2CppString* value) {
		return ((T (*)(MPNewGuideConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377C368))(this, value);
	}
	template <typename T = Il2CppString*> T get_GuideText() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C370))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_GuideText_2() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C380))(this);
	}
	template <typename T = void> T set_LOCID_GuideText_2(Il2CppString* value) {
		return ((T (*)(MPNewGuideConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377C388))(this, value);
	}
	template <typename T = Il2CppString*> T get_GuideText_2() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C390))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_GuideText_3() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C3A0))(this);
	}
	template <typename T = void> T set_LOCID_GuideText_3(Il2CppString* value) {
		return ((T (*)(MPNewGuideConfigConfig*, Il2CppString*))(Il2CppBase() + 0x377C3A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_GuideText_3() {
		return ((T (*)(MPNewGuideConfigConfig*))(Il2CppBase() + 0x377C3B0))(this);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MPNewGuideConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377C3C0))(this, bytes, position);
	}

};

}
