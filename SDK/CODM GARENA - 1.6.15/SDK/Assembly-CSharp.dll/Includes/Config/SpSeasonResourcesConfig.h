#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpSeasonResourcesConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpSeasonResourcesConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Season_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Res_ready() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Home_entrance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Ui_big_bg() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Video_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Full_award_bg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& Season_icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Season_introduce_1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Season_introduce_2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Season_introduce_3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& Season_introduce_4() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Season_introduce_5() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Buy_bg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& BattlePassComicSeasonKV() {
		return *(T*)((uintptr_t)this + 0x44);
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
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E75EC))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E768C))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(SpSeasonResourcesConfig*, int32_t))(Il2CppBase() + 0x30E7694))(this, value);
	}
	template <typename T = int32_t> T get_Season_id() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E769C))(this);
	}
	template <typename T = void> T set_Season_id(int32_t value) {
		return ((T (*)(SpSeasonResourcesConfig*, int32_t))(Il2CppBase() + 0x30E76A4))(this, value);
	}
	template <typename T = int32_t> T get_Res_ready() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E76AC))(this);
	}
	template <typename T = void> T set_Res_ready(int32_t value) {
		return ((T (*)(SpSeasonResourcesConfig*, int32_t))(Il2CppBase() + 0x30E76B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Home_entrance() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E76BC))(this);
	}
	template <typename T = void> T set_Home_entrance(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E76C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Ui_big_bg() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E76CC))(this);
	}
	template <typename T = void> T set_Ui_big_bg(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E76D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Video_name() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E76DC))(this);
	}
	template <typename T = void> T set_Video_name(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E76E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Full_award_bg() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E76EC))(this);
	}
	template <typename T = void> T set_Full_award_bg(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E76F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Season_icon() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E76FC))(this);
	}
	template <typename T = void> T set_Season_icon(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E7704))(this, value);
	}
	template <typename T = Il2CppString*> T get_Season_introduce_1() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E770C))(this);
	}
	template <typename T = void> T set_Season_introduce_1(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E7714))(this, value);
	}
	template <typename T = Il2CppString*> T get_Season_introduce_2() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E771C))(this);
	}
	template <typename T = void> T set_Season_introduce_2(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E7724))(this, value);
	}
	template <typename T = Il2CppString*> T get_Season_introduce_3() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E772C))(this);
	}
	template <typename T = void> T set_Season_introduce_3(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E7734))(this, value);
	}
	template <typename T = Il2CppString*> T get_Season_introduce_4() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E773C))(this);
	}
	template <typename T = void> T set_Season_introduce_4(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E7744))(this, value);
	}
	template <typename T = Il2CppString*> T get_Season_introduce_5() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E774C))(this);
	}
	template <typename T = void> T set_Season_introduce_5(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E7754))(this, value);
	}
	template <typename T = Il2CppString*> T get_Buy_bg() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E775C))(this);
	}
	template <typename T = void> T set_Buy_bg(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E7764))(this, value);
	}
	template <typename T = Il2CppString*> T get_BattlePassComicSeasonKV() {
		return ((T (*)(SpSeasonResourcesConfig*))(Il2CppBase() + 0x30E776C))(this);
	}
	template <typename T = void> T set_BattlePassComicSeasonKV(Il2CppString* value) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppString*))(Il2CppBase() + 0x30E7774))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpSeasonResourcesConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E777C))(this, bytes, position);
	}

};

}
