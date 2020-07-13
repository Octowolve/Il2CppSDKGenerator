#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKGroupMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKGroupMessage"));
	}

	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& actionReport() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& link() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& extraJson() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_Type() {
		return ((T (*)(MSDKGroupMessage*))(Il2CppBase() + 0x46C9DE4))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(MSDKGroupMessage*, int32_t))(Il2CppBase() + 0x46C9DEC))(this, value);
	}
	template <typename T = int32_t> T get_ActionReport() {
		return ((T (*)(MSDKGroupMessage*))(Il2CppBase() + 0x46C9DF4))(this);
	}
	template <typename T = void> T set_ActionReport(int32_t value) {
		return ((T (*)(MSDKGroupMessage*, int32_t))(Il2CppBase() + 0x46C9DFC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(MSDKGroupMessage*))(Il2CppBase() + 0x46C9E04))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(MSDKGroupMessage*, Il2CppString*))(Il2CppBase() + 0x46C9E0C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(MSDKGroupMessage*))(Il2CppBase() + 0x46C9E14))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(MSDKGroupMessage*, Il2CppString*))(Il2CppBase() + 0x46C9E1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Link() {
		return ((T (*)(MSDKGroupMessage*))(Il2CppBase() + 0x46C9E24))(this);
	}
	template <typename T = void> T set_Link(Il2CppString* value) {
		return ((T (*)(MSDKGroupMessage*, Il2CppString*))(Il2CppBase() + 0x46C9E2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ExtraJson() {
		return ((T (*)(MSDKGroupMessage*))(Il2CppBase() + 0x46C9E34))(this);
	}
	template <typename T = void> T set_ExtraJson(Il2CppString* value) {
		return ((T (*)(MSDKGroupMessage*, Il2CppString*))(Il2CppBase() + 0x46C9E3C))(this, value);
	}

};

}
