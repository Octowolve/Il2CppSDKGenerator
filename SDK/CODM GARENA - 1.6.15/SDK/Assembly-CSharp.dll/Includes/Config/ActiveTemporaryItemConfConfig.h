#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ActiveTemporaryItemConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ActiveTemporaryItemConfConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x1C);
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

	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ActiveTemporaryItemConfConfig*))(Il2CppBase() + 0x2D3D6C8))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(ActiveTemporaryItemConfConfig*))(Il2CppBase() + 0x2D3D768))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(ActiveTemporaryItemConfConfig*, uint32_t))(Il2CppBase() + 0x2D3D770))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(ActiveTemporaryItemConfConfig*))(Il2CppBase() + 0x2D3D778))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(ActiveTemporaryItemConfConfig*, int32_t))(Il2CppBase() + 0x2D3D780))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ActiveTemporaryItemConfConfig*))(Il2CppBase() + 0x2D3D788))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ActiveTemporaryItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D3D790))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ActiveTemporaryItemConfConfig*))(Il2CppBase() + 0x2D3D798))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(ActiveTemporaryItemConfConfig*))(Il2CppBase() + 0x2D3D7A8))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(ActiveTemporaryItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D3D7B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(ActiveTemporaryItemConfConfig*))(Il2CppBase() + 0x2D3D7B8))(this);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(ActiveTemporaryItemConfConfig*))(Il2CppBase() + 0x2D3D7C8))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(ActiveTemporaryItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D3D7D0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ActiveTemporaryItemConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D3D7D8))(this, bytes, position);
	}

};

}
