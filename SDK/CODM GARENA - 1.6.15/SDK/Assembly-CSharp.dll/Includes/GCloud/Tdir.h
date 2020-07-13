#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class Tdir
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "Tdir"));
	}

	template <typename T = uintptr_t> T& QueryAllEvent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& QueryTreeEvent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& QueryLeafEvent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_QueryAllEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_QueryAllEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_QueryTreeEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_QueryTreeEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_QueryLeafEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_QueryLeafEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsConnected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueryLeaf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueryAllProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueryTreeProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueryLeafProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetQueryTreeTreeEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearQueryTreeTreeEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T add_QueryAllEvent(uintptr_t value) {
		return ((T (*)(Tdir*, uintptr_t))(Il2CppBase() + 0x443A9FC))(this, value);
	}
	template <typename T = void> T remove_QueryAllEvent(uintptr_t value) {
		return ((T (*)(Tdir*, uintptr_t))(Il2CppBase() + 0x443ABF4))(this, value);
	}
	template <typename T = void> T add_QueryTreeEvent(uintptr_t value) {
		return ((T (*)(Tdir*, uintptr_t))(Il2CppBase() + 0x443ADEC))(this, value);
	}
	template <typename T = void> T remove_QueryTreeEvent(uintptr_t value) {
		return ((T (*)(Tdir*, uintptr_t))(Il2CppBase() + 0x443AFE4))(this, value);
	}
	template <typename T = void> T add_QueryLeafEvent(uintptr_t value) {
		return ((T (*)(Tdir*, uintptr_t))(Il2CppBase() + 0x443B1DC))(this, value);
	}
	template <typename T = void> T remove_QueryLeafEvent(uintptr_t value) {
		return ((T (*)(Tdir*, uintptr_t))(Il2CppBase() + 0x443B3D4))(this, value);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x443B5CC))(0);
	}
	template <typename T = bool> T Initialize(uintptr_t initInfo) {
		return ((T (*)(Tdir*, uintptr_t))(Il2CppBase() + 0x443B68C))(this, initInfo);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Tdir*))(Il2CppBase() + 0x443B884))(this);
	}
	template <typename T = bool> T IsConnected() {
		return ((T (*)(Tdir*))(Il2CppBase() + 0x443B9F4))(this);
	}
	template <typename T = int32_t> T QueryAll() {
		return ((T (*)(Tdir*))(Il2CppBase() + 0x443BB6C))(this);
	}
	template <typename T = int32_t> T QueryTree(int32_t treeId) {
		return ((T (*)(Tdir*, int32_t))(Il2CppBase() + 0x443BCDC))(this, treeId);
	}
	template <typename T = int32_t> T QueryLeaf(int32_t treeId, int32_t leafId) {
		return ((T (*)(Tdir*, int32_t, int32_t))(Il2CppBase() + 0x443BE68))(this, treeId, leafId);
	}
	template <typename T = void> T OnQueryAllProc(int32_t error, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(Tdir*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x443C018))(this, error, data);
	}
	template <typename T = void> T OnQueryTreeProc(int32_t error, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(Tdir*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x443C258))(this, error, data);
	}
	template <typename T = void> T OnQueryLeafProc(int32_t error, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(Tdir*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x443C498))(this, error, data);
	}
	template <typename T = void> T SetQueryTreeTreeEvent(uintptr_t callback) {
		return ((T (*)(Tdir*, uintptr_t))(Il2CppBase() + 0x443C600))(this, callback);
	}
	template <typename T = void> T ClearQueryTreeTreeEvent() {
		return ((T (*)(Tdir*))(Il2CppBase() + 0x443C6A8))(this);
	}
	template <typename T = bool> static T gcloud_tdir_initialize(Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x443B78C))(0, data, len);
	}
	template <typename T = void> static T gcloud_tdir_update() {
		return ((T (*)(void *))(Il2CppBase() + 0x443B924))(0);
	}
	template <typename T = bool> static T gcloud_tdir_isconnected() {
		return ((T (*)(void *))(Il2CppBase() + 0x443BA94))(0);
	}
	template <typename T = int32_t> static T gcloud_tdir_queryall() {
		return ((T (*)(void *))(Il2CppBase() + 0x443BC0C))(0);
	}
	template <typename T = int32_t> static T gcloud_tdir_querytree(int32_t treeId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x443BD88))(0, treeId);
	}
	template <typename T = int32_t> static T gcloud_tdir_queryleaf(int32_t treeId, int32_t leafId) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x443BF30))(0, treeId, leafId);
	}

};

}
