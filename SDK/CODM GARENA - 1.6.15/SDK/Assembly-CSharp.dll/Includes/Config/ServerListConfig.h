#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ServerListConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ServerListConfig"));
	}

	template <typename T = bool> T& Custom() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EEntry() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Category() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& BuildMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& ShowInMobile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& UrlDefault() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& UrlBak_0() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& UrlBak_1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& UrlBak_2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Entry() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCustomConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetServerEntry() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetPublishServers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPublishServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DE20C))(this);
	}
	template <typename T = uintptr_t> static T CreateCustomConfig(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x30DE318))(0, url);
	}
	template <typename T = uintptr_t> static T GetTargetServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x30DE458))(0);
	}
	template <typename T = uintptr_t> static T GetTargetServerEntry() {
		return ((T (*)(void *))(Il2CppBase() + 0x30DE5F8))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTargetPublishServers() {
		return ((T (*)(void *))(Il2CppBase() + 0x30DE8C4))(0);
	}
	template <typename T = bool> static T IsPublishServer(Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x30DEE30))(0, url);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DEF90))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ServerListConfig*, Il2CppString*))(Il2CppBase() + 0x30DE430))(this, value);
	}
	template <typename T = Il2CppString*> T get_Category() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DEF98))(this);
	}
	template <typename T = void> T set_Category(Il2CppString* value) {
		return ((T (*)(ServerListConfig*, Il2CppString*))(Il2CppBase() + 0x30DE438))(this, value);
	}
	template <typename T = Il2CppString*> T get_BuildMode() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DEFA0))(this);
	}
	template <typename T = void> T set_BuildMode(Il2CppString* value) {
		return ((T (*)(ServerListConfig*, Il2CppString*))(Il2CppBase() + 0x30DE440))(this, value);
	}
	template <typename T = bool> T get_ShowInMobile() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DEFA8))(this);
	}
	template <typename T = void> T set_ShowInMobile(bool value) {
		return ((T (*)(ServerListConfig*, bool))(Il2CppBase() + 0x30DE448))(this, value);
	}
	template <typename T = Il2CppString*> T get_UrlDefault() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DEF88))(this);
	}
	template <typename T = void> T set_UrlDefault(Il2CppString* value) {
		return ((T (*)(ServerListConfig*, Il2CppString*))(Il2CppBase() + 0x30DE450))(this, value);
	}
	template <typename T = Il2CppString*> T get_UrlBak_0() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DEFB0))(this);
	}
	template <typename T = void> T set_UrlBak_0(Il2CppString* value) {
		return ((T (*)(ServerListConfig*, Il2CppString*))(Il2CppBase() + 0x30DEFB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_UrlBak_1() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DEFC0))(this);
	}
	template <typename T = void> T set_UrlBak_1(Il2CppString* value) {
		return ((T (*)(ServerListConfig*, Il2CppString*))(Il2CppBase() + 0x30DEFC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_UrlBak_2() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DEFD0))(this);
	}
	template <typename T = void> T set_UrlBak_2(Il2CppString* value) {
		return ((T (*)(ServerListConfig*, Il2CppString*))(Il2CppBase() + 0x30DEFD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Entry() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DE310))(this);
	}
	template <typename T = void> T set_Entry(Il2CppString* value) {
		return ((T (*)(ServerListConfig*, Il2CppString*))(Il2CppBase() + 0x30DEFE0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ServerListConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DEFE8))(this, bytes, position);
	}
	template <typename T = bool> static T GetTargetPublishServersm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30DF1B8))(0, x);
	}
	template <typename T = bool> static T GetTargetPublishServersm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30DF1E8))(0, x);
	}
	template <typename T = bool> static T GetTargetPublishServersm__2(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30DF218))(0, x);
	}
	template <typename T = bool> static T GetTargetPublishServersm__3(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30DF248))(0, x);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ServerListConfig*))(Il2CppBase() + 0x30DF278))(this);
	}

};

}
