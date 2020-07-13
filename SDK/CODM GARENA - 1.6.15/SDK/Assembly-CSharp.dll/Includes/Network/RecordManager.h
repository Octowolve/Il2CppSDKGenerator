#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class RecordManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "RecordManager"));
	}

	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_RecordState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_RecordOrReplayTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_LastReplayIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_LastRecordIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsPendingRecord() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& FileName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Record() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllocRecordData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PendingRecord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x5083184))(0);
	}
	template <typename T = uintptr_t> T get_RecordState() {
		return ((T (*)(RecordManager*))(Il2CppBase() + 0x5083244))(this);
	}
	template <typename T = bool> T get_IsPendingRecord() {
		return ((T (*)(RecordManager*))(Il2CppBase() + 0x508324C))(this);
	}
	template <typename T = void> T Record(Il2CppArray<uintptr_t>* data, int32_t length, int32_t sequence) {
		return ((T (*)(RecordManager*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x5083254))(this, data, length, sequence);
	}
	template <typename T = void> T AllocRecordData(int32_t num) {
		return ((T (*)(RecordManager*, int32_t))(Il2CppBase() + 0x5083430))(this, num);
	}
	template <typename T = void> T PendingRecord() {
		return ((T (*)(RecordManager*))(Il2CppBase() + 0x50835E4))(this);
	}
	template <typename T = void> T SwitchState(uintptr_t state) {
		return ((T (*)(RecordManager*, uintptr_t))(Il2CppBase() + 0x5083688))(this, state);
	}
	template <typename T = void> T TickReplay(uintptr_t processor) {
		return ((T (*)(RecordManager*, uintptr_t))(Il2CppBase() + 0x5083DB0))(this, processor);
	}
	template <typename T = void> T SaveData() {
		return ((T (*)(RecordManager*))(Il2CppBase() + 0x5083AC4))(this);
	}
	template <typename T = void> T LoadData() {
		return ((T (*)(RecordManager*))(Il2CppBase() + 0x50837E0))(this);
	}

};

}
