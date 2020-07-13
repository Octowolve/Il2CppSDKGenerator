#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IBRDroppedPickUpConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IBRDroppedPickUpConfig"));
	}


	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_SubItemType() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_StackNum() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Quality() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_SortParam() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Brief() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_SquareSpriteName() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_SubScriptSpriteName() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_DroppedPickUpType() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_GetSettingLimitCount() {
		return ((T (*)(IBRDroppedPickUpConfig*))(Il2CppBase() + 0x0))(this);
	}

};

}
