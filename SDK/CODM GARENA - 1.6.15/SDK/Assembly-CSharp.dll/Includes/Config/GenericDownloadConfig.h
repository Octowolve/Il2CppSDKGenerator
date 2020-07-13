#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GenericDownloadConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GenericDownloadConfig"));
	}

	template <typename T = int32_t> T& QuestID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ModuleKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& TriggerStyle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& TriggerParam() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& TriggerPriority() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Priority() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& BeginType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MapDownload() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& MapIds() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& QuestName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Size() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& IconName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& LOC_Tip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& LitePackage() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& DynamicPackage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& King() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Korea() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Garena() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& VNG() {
		return *(T*)((uintptr_t)this + 0x58);
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
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649950))(this);
	}
	template <typename T = int32_t> T get_QuestID() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x46499F0))(this);
	}
	template <typename T = void> T set_QuestID(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x46499F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModuleKey() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649A00))(this);
	}
	template <typename T = void> T set_ModuleKey(Il2CppString* value) {
		return ((T (*)(GenericDownloadConfig*, Il2CppString*))(Il2CppBase() + 0x4649A08))(this, value);
	}
	template <typename T = int32_t> T get_TriggerStyle() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649A10))(this);
	}
	template <typename T = void> T set_TriggerStyle(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649A18))(this, value);
	}
	template <typename T = int32_t> T get_TriggerParam() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649A20))(this);
	}
	template <typename T = void> T set_TriggerParam(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649A28))(this, value);
	}
	template <typename T = int32_t> T get_TriggerPriority() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649A30))(this);
	}
	template <typename T = void> T set_TriggerPriority(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649A38))(this, value);
	}
	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649A40))(this);
	}
	template <typename T = void> T set_Priority(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649A48))(this, value);
	}
	template <typename T = int32_t> T get_BeginType() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649A50))(this);
	}
	template <typename T = void> T set_BeginType(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649A58))(this, value);
	}
	template <typename T = Il2CppString*> T get_StartTime() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649A60))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppString* value) {
		return ((T (*)(GenericDownloadConfig*, Il2CppString*))(Il2CppBase() + 0x4649A68))(this, value);
	}
	template <typename T = int32_t> T get_MapDownload() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649A70))(this);
	}
	template <typename T = void> T set_MapDownload(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649A78))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapIds() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649A80))(this);
	}
	template <typename T = void> T set_MapIds(Il2CppString* value) {
		return ((T (*)(GenericDownloadConfig*, Il2CppString*))(Il2CppBase() + 0x4649A88))(this, value);
	}
	template <typename T = Il2CppString*> T get_QuestName() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649A90))(this);
	}
	template <typename T = void> T set_QuestName(Il2CppString* value) {
		return ((T (*)(GenericDownloadConfig*, Il2CppString*))(Il2CppBase() + 0x4649A98))(this, value);
	}
	template <typename T = float> T get_Size() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649AA0))(this);
	}
	template <typename T = void> T set_Size(float value) {
		return ((T (*)(GenericDownloadConfig*, float))(Il2CppBase() + 0x4649AA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_IconName() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649AB0))(this);
	}
	template <typename T = void> T set_IconName(Il2CppString* value) {
		return ((T (*)(GenericDownloadConfig*, Il2CppString*))(Il2CppBase() + 0x4649AB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOC_Tip() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649AC0))(this);
	}
	template <typename T = void> T set_LOC_Tip(Il2CppString* value) {
		return ((T (*)(GenericDownloadConfig*, Il2CppString*))(Il2CppBase() + 0x4649AC8))(this, value);
	}
	template <typename T = int32_t> T get_LitePackage() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649AD0))(this);
	}
	template <typename T = void> T set_LitePackage(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649AD8))(this, value);
	}
	template <typename T = int32_t> T get_DynamicPackage() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649AE0))(this);
	}
	template <typename T = void> T set_DynamicPackage(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649AE8))(this, value);
	}
	template <typename T = int32_t> T get_King() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649AF0))(this);
	}
	template <typename T = void> T set_King(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649AF8))(this, value);
	}
	template <typename T = int32_t> T get_Korea() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649B00))(this);
	}
	template <typename T = void> T set_Korea(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649B08))(this, value);
	}
	template <typename T = int32_t> T get_Garena() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649B10))(this);
	}
	template <typename T = void> T set_Garena(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649B18))(this, value);
	}
	template <typename T = int32_t> T get_VNG() {
		return ((T (*)(GenericDownloadConfig*))(Il2CppBase() + 0x4649B20))(this);
	}
	template <typename T = void> T set_VNG(int32_t value) {
		return ((T (*)(GenericDownloadConfig*, int32_t))(Il2CppBase() + 0x4649B28))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GenericDownloadConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4649B30))(this, bytes, position);
	}

};

}
