#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class RelevantInfoStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "RelevantInfoStats"));
	}

	template <typename T = int32_t> static T& activeRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& activeRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& activePlayerRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& activePlayerRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& activeMonsterRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& activeMonsterRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& activeVehicleRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& activeVehicleRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& clientRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& clientRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& clientPlayerRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& clientPlayerRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = int32_t> static T& clientMonsterRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& clientMonsterRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& clientVehicleRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = int32_t> static T& clientVehicleRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = int32_t> static T& serverRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = int32_t> static T& serverRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = int32_t> static T& serverPlayerRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = int32_t> static T& serverPlayerRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = int32_t> static T& serverMonsterRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = int32_t> static T& serverMonsterRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = int32_t> static T& serverVehicleRelevantCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = int32_t> static T& serverVehicleRelevantMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClientRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeActiveRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = void> static T set_activeRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D64FB8))(0, value);
	}
	template <typename T = int32_t> static T get_activeRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6503C))(0);
	}
	template <typename T = void> static T set_activeRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D650BC))(0, value);
	}
	template <typename T = int32_t> static T get_activeRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65140))(0);
	}
	template <typename T = void> static T set_activePlayerRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D651C0))(0, value);
	}
	template <typename T = int32_t> static T get_activePlayerRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65244))(0);
	}
	template <typename T = void> static T set_activePlayerRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D652C4))(0, value);
	}
	template <typename T = int32_t> static T get_activePlayerRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65348))(0);
	}
	template <typename T = void> static T set_activeMonsterRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D653C8))(0, value);
	}
	template <typename T = int32_t> static T get_activeMonsterRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6544C))(0);
	}
	template <typename T = void> static T set_activeMonsterRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D654CC))(0, value);
	}
	template <typename T = int32_t> static T get_activeMonsterRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65550))(0);
	}
	template <typename T = void> static T set_activeVehicleRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D655D0))(0, value);
	}
	template <typename T = int32_t> static T get_activeVehicleRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65654))(0);
	}
	template <typename T = void> static T set_activeVehicleRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D656D4))(0, value);
	}
	template <typename T = int32_t> static T get_activeVehicleRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65758))(0);
	}
	template <typename T = void> static T set_clientRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D657D8))(0, value);
	}
	template <typename T = int32_t> static T get_clientRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6585C))(0);
	}
	template <typename T = void> static T set_clientRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D658DC))(0, value);
	}
	template <typename T = int32_t> static T get_clientRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65960))(0);
	}
	template <typename T = void> static T set_clientPlayerRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D659E0))(0, value);
	}
	template <typename T = int32_t> static T get_clientPlayerRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65A64))(0);
	}
	template <typename T = void> static T set_clientPlayerRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D65AE4))(0, value);
	}
	template <typename T = int32_t> static T get_clientPlayerRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65B68))(0);
	}
	template <typename T = void> static T set_clientMonsterRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D65BE8))(0, value);
	}
	template <typename T = int32_t> static T get_clientMonsterRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65C6C))(0);
	}
	template <typename T = void> static T set_clientMonsterRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D65CEC))(0, value);
	}
	template <typename T = int32_t> static T get_clientMonsterRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65D70))(0);
	}
	template <typename T = void> static T set_clientVehicleRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D65DF0))(0, value);
	}
	template <typename T = int32_t> static T get_clientVehicleRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65E74))(0);
	}
	template <typename T = void> static T set_clientVehicleRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D65EF4))(0, value);
	}
	template <typename T = int32_t> static T get_clientVehicleRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D65F78))(0);
	}
	template <typename T = void> static T set_serverRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D65FF8))(0, value);
	}
	template <typename T = int32_t> static T get_serverRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6607C))(0);
	}
	template <typename T = void> static T set_serverRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D660FC))(0, value);
	}
	template <typename T = int32_t> static T get_serverRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D66180))(0);
	}
	template <typename T = void> static T set_serverPlayerRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D66200))(0, value);
	}
	template <typename T = int32_t> static T get_serverPlayerRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D66284))(0);
	}
	template <typename T = void> static T set_serverPlayerRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D66304))(0, value);
	}
	template <typename T = int32_t> static T get_serverPlayerRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D66388))(0);
	}
	template <typename T = void> static T set_serverMonsterRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D66408))(0, value);
	}
	template <typename T = int32_t> static T get_serverMonsterRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D6648C))(0);
	}
	template <typename T = void> static T set_serverMonsterRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D6650C))(0, value);
	}
	template <typename T = int32_t> static T get_serverMonsterRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D66590))(0);
	}
	template <typename T = void> static T set_serverVehicleRelevantCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D66610))(0, value);
	}
	template <typename T = int32_t> static T get_serverVehicleRelevantCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D66694))(0);
	}
	template <typename T = void> static T set_serverVehicleRelevantMaxCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3D66714))(0, value);
	}
	template <typename T = int32_t> static T get_serverVehicleRelevantMaxCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D66798))(0);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D66818))(0);
	}
	template <typename T = void> static T ChangeServerRelevant(uintptr_t objType, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3D67128))(0, objType, count);
	}
	template <typename T = void> static T ChangeClientRelevant(uintptr_t objType, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3D67790))(0, objType, count);
	}
	template <typename T = void> static T ChangeActiveRelevant(uintptr_t objType, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3D67DF8))(0, objType, count);
	}

};

}
