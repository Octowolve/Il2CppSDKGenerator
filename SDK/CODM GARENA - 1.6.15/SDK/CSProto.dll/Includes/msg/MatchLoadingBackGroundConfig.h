#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MatchLoadingBackGroundConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MatchLoadingBackGroundConfig"));
	}

	template <typename T = int32_t> T& _LoadingType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _ModeId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _IntModeId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _MapId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _IntMapId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _BLadder() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _MinLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _MaxLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _StartTimestamp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _EndTimestamp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _GroupProp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _Id() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _abtest_conf() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _PictureConfigureIndex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _ModeList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _MapList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _MapIdList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ModeIdList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = int32_t> T get_LoadingType() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4B18))(this);
	}
	template <typename T = void> T set_LoadingType(int32_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, int32_t))(Il2CppBase() + 0x4EA4B20))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeId() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4B28))(this);
	}
	template <typename T = void> T set_ModeId(Il2CppString* value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, Il2CppString*))(Il2CppBase() + 0x4EA4B30))(this, value);
	}
	template <typename T = int32_t> T get_IntModeId() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4B38))(this);
	}
	template <typename T = void> T set_IntModeId(int32_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, int32_t))(Il2CppBase() + 0x4EA4B40))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapId() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4B48))(this);
	}
	template <typename T = void> T set_MapId(Il2CppString* value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, Il2CppString*))(Il2CppBase() + 0x4EA4B50))(this, value);
	}
	template <typename T = int32_t> T get_IntMapId() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4B58))(this);
	}
	template <typename T = void> T set_IntMapId(int32_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, int32_t))(Il2CppBase() + 0x4EA4B60))(this, value);
	}
	template <typename T = bool> T get_BLadder() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4B68))(this);
	}
	template <typename T = void> T set_BLadder(bool value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, bool))(Il2CppBase() + 0x4EA4B70))(this, value);
	}
	template <typename T = uint32_t> T get_MinLevel() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4B78))(this);
	}
	template <typename T = void> T set_MinLevel(uint32_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA4B80))(this, value);
	}
	template <typename T = uint32_t> T get_MaxLevel() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4B88))(this);
	}
	template <typename T = void> T set_MaxLevel(uint32_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA4B90))(this, value);
	}
	template <typename T = Il2CppString*> T get_StartTime() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4B98))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppString* value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, Il2CppString*))(Il2CppBase() + 0x4EA4BA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4BA8))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, Il2CppString*))(Il2CppBase() + 0x4EA4BB0))(this, value);
	}
	template <typename T = uint32_t> T get_StartTimestamp() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4BB8))(this);
	}
	template <typename T = void> T set_StartTimestamp(uint32_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA4BC0))(this, value);
	}
	template <typename T = uint32_t> T get_EndTimestamp() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4BC8))(this);
	}
	template <typename T = void> T set_EndTimestamp(uint32_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA4BD0))(this, value);
	}
	template <typename T = int32_t> T get_GroupProp() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4BD8))(this);
	}
	template <typename T = void> T set_GroupProp(int32_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, int32_t))(Il2CppBase() + 0x4EA4BE0))(this, value);
	}
	template <typename T = uint32_t> T get_Id() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4BE8))(this);
	}
	template <typename T = void> T set_Id(uint32_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA4BF0))(this, value);
	}
	template <typename T = uintptr_t> T get_abtest_conf() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4BF8))(this);
	}
	template <typename T = void> T set_abtest_conf(uintptr_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, uintptr_t))(Il2CppBase() + 0x4EA4C00))(this, value);
	}
	template <typename T = uint32_t> T get_PictureConfigureIndex() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4C08))(this);
	}
	template <typename T = void> T set_PictureConfigureIndex(uint32_t value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, uint32_t))(Il2CppBase() + 0x4EA4C10))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_ModeList() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4C18))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_MapList() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4C20))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MapIdList() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4C28))(this);
	}
	template <typename T = void> T set_MapIdList(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA4C30))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ModeIdList() {
		return ((T (*)(MatchLoadingBackGroundConfig*))(Il2CppBase() + 0x4EA4C38))(this);
	}
	template <typename T = void> T set_ModeIdList(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MatchLoadingBackGroundConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA4C40))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MatchLoadingBackGroundConfig*, bool))(Il2CppBase() + 0x4EA4C48))(this, createIfMissing);
	}

};

}
