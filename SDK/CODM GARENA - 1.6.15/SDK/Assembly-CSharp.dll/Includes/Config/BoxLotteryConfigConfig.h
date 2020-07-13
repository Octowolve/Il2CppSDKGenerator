#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BoxLotteryConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BoxLotteryConfigConfig"));
	}

	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Box_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Itemid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Itemnum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Rand() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Is_show() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLotteryByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLotteryListByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetLotteryByID(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D422A8))(0, id);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetLotteryListByID(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D42438))(0, id);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D425C8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BoxLotteryConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D425D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D425D8))(this);
	}
	template <typename T = int32_t> T get_Box_id() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D425E8))(this);
	}
	template <typename T = void> T set_Box_id(int32_t value) {
		return ((T (*)(BoxLotteryConfigConfig*, int32_t))(Il2CppBase() + 0x2D425F0))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D425F8))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(BoxLotteryConfigConfig*, int32_t))(Il2CppBase() + 0x2D42600))(this, value);
	}
	template <typename T = int32_t> T get_Itemid() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D42608))(this);
	}
	template <typename T = void> T set_Itemid(int32_t value) {
		return ((T (*)(BoxLotteryConfigConfig*, int32_t))(Il2CppBase() + 0x2D42610))(this, value);
	}
	template <typename T = int32_t> T get_Itemnum() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D42618))(this);
	}
	template <typename T = void> T set_Itemnum(int32_t value) {
		return ((T (*)(BoxLotteryConfigConfig*, int32_t))(Il2CppBase() + 0x2D42620))(this, value);
	}
	template <typename T = int32_t> T get_Rand() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D42628))(this);
	}
	template <typename T = void> T set_Rand(int32_t value) {
		return ((T (*)(BoxLotteryConfigConfig*, int32_t))(Il2CppBase() + 0x2D42630))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D42638))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(BoxLotteryConfigConfig*, int32_t))(Il2CppBase() + 0x2D42640))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D42648))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(BoxLotteryConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D42650))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D42658))(this);
	}
	template <typename T = bool> T get_Is_show() {
		return ((T (*)(BoxLotteryConfigConfig*))(Il2CppBase() + 0x2D42668))(this);
	}
	template <typename T = void> T set_Is_show(bool value) {
		return ((T (*)(BoxLotteryConfigConfig*, bool))(Il2CppBase() + 0x2D42670))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BoxLotteryConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D42678))(this, bytes, position);
	}

};

}
