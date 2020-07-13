#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class OperateNoticeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "OperateNoticeConfig"));
	}

	template <typename T = Il2CppString*> T& LanguageCode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& AppUpdateEnable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& AppUpdateTitle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& AppUpdateBody() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AppUpdatePicUrl() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& ResUpdateEnable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ResUpdateTitle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& ResUpdateBody() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ResUpdatePicUrl() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& AnnouncementEnable() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& AnnouncementTitle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& AnnouncementBody() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AnnouncementUrl() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CurrentLanguageConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T CurrentLanguageConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x377CFE0))(0);
	}
	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D1E0))(this);
	}
	template <typename T = Il2CppString*> T get_LanguageCode() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D280))(this);
	}
	template <typename T = void> T set_LanguageCode(Il2CppString* value) {
		return ((T (*)(OperateNoticeConfig*, Il2CppString*))(Il2CppBase() + 0x377D288))(this, value);
	}
	template <typename T = bool> T get_AppUpdateEnable() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D290))(this);
	}
	template <typename T = void> T set_AppUpdateEnable(bool value) {
		return ((T (*)(OperateNoticeConfig*, bool))(Il2CppBase() + 0x377D298))(this, value);
	}
	template <typename T = Il2CppString*> T get_AppUpdateTitle() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D2A0))(this);
	}
	template <typename T = void> T set_AppUpdateTitle(Il2CppString* value) {
		return ((T (*)(OperateNoticeConfig*, Il2CppString*))(Il2CppBase() + 0x377D2A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_AppUpdateBody() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D2B0))(this);
	}
	template <typename T = void> T set_AppUpdateBody(Il2CppString* value) {
		return ((T (*)(OperateNoticeConfig*, Il2CppString*))(Il2CppBase() + 0x377D2B8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AppUpdatePicUrl() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D2C0))(this);
	}
	template <typename T = void> T set_AppUpdatePicUrl(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(OperateNoticeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x377D2C8))(this, value);
	}
	template <typename T = bool> T get_ResUpdateEnable() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D2D0))(this);
	}
	template <typename T = void> T set_ResUpdateEnable(bool value) {
		return ((T (*)(OperateNoticeConfig*, bool))(Il2CppBase() + 0x377D2D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ResUpdateTitle() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D2E0))(this);
	}
	template <typename T = void> T set_ResUpdateTitle(Il2CppString* value) {
		return ((T (*)(OperateNoticeConfig*, Il2CppString*))(Il2CppBase() + 0x377D2E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ResUpdateBody() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D2F0))(this);
	}
	template <typename T = void> T set_ResUpdateBody(Il2CppString* value) {
		return ((T (*)(OperateNoticeConfig*, Il2CppString*))(Il2CppBase() + 0x377D2F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ResUpdatePicUrl() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D300))(this);
	}
	template <typename T = void> T set_ResUpdatePicUrl(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(OperateNoticeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x377D308))(this, value);
	}
	template <typename T = bool> T get_AnnouncementEnable() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D310))(this);
	}
	template <typename T = void> T set_AnnouncementEnable(bool value) {
		return ((T (*)(OperateNoticeConfig*, bool))(Il2CppBase() + 0x377D318))(this, value);
	}
	template <typename T = Il2CppString*> T get_AnnouncementTitle() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D320))(this);
	}
	template <typename T = void> T set_AnnouncementTitle(Il2CppString* value) {
		return ((T (*)(OperateNoticeConfig*, Il2CppString*))(Il2CppBase() + 0x377D328))(this, value);
	}
	template <typename T = Il2CppString*> T get_AnnouncementBody() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D330))(this);
	}
	template <typename T = void> T set_AnnouncementBody(Il2CppString* value) {
		return ((T (*)(OperateNoticeConfig*, Il2CppString*))(Il2CppBase() + 0x377D338))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AnnouncementUrl() {
		return ((T (*)(OperateNoticeConfig*))(Il2CppBase() + 0x377D340))(this);
	}
	template <typename T = void> T set_AnnouncementUrl(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(OperateNoticeConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x377D348))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(OperateNoticeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377D350))(this, bytes, position);
	}

};

}
