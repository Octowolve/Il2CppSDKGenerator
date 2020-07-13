#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class IItemBaseConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "IItemBaseConfConfig"));
	}


	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(IItemBaseConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(IItemBaseConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(IItemBaseConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(IItemBaseConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(IItemBaseConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(IItemBaseConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(IItemBaseConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(IItemBaseConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(IItemBaseConfConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(IItemBaseConfConfig*))(Il2CppBase() + 0x0))(this);
	}

};

}
