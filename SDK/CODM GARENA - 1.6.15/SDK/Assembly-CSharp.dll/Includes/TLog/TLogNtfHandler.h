#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace TLog {

class TLogNtfHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TLog", "TLogNtfHandler"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStringDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Time() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOpenId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClientVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameSvrId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatchModule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTeamType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRegisterTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRegisterPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUserName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameInfoPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyServerFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingsNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingsShootingMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingsDoubleFireReverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGraphicQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGraphicFrames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGraphicHDR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGraphicDOF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGraphicBrStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGraphicPvpStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPvpControlPlan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustScreenMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHudLayoutConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoystickConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWindowName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameAppId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountryId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlatId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNetwork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUserSettingLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}

	template <typename T = double> static T GetTimeNow() {
		return ((T (*)(void *))(Il2CppBase() + 0x466F214))(0);
	}
	template <typename T = Il2CppString*> static T GetStringDateTime(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x466F2F8))(0, time);
	}
	template <typename T = Il2CppString*> static T GetString(double time) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x466F3EC))(0, time);
	}
	template <typename T = Il2CppString*> static T Time() {
		return ((T (*)(void *))(Il2CppBase() + 0x466F5F8))(0);
	}
	template <typename T = Il2CppString*> static T GetOpenId() {
		return ((T (*)(void *))(Il2CppBase() + 0x466F6A8))(0);
	}
	template <typename T = Il2CppString*> static T GetClientVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x466F78C))(0);
	}
	template <typename T = int32_t> static T GetMapId() {
		return ((T (*)(void *))(Il2CppBase() + 0x466F874))(0);
	}
	template <typename T = Il2CppString*> static T GameSvrId() {
		return ((T (*)(void *))(Il2CppBase() + 0x466F94C))(0);
	}
	template <typename T = Il2CppString*> static T GetIp() {
		return ((T (*)(void *))(Il2CppBase() + 0x466FA84))(0);
	}
	template <typename T = uint16_t> static T GetPort() {
		return ((T (*)(void *))(Il2CppBase() + 0x466FB68))(0);
	}
	template <typename T = uint32_t> static T GetRoomId() {
		return ((T (*)(void *))(Il2CppBase() + 0x466FC4C))(0);
	}
	template <typename T = uint64_t> static T GetRoomGuid() {
		return ((T (*)(void *))(Il2CppBase() + 0x466FD30))(0);
	}
	template <typename T = int32_t> static T GetMatchModule() {
		return ((T (*)(void *))(Il2CppBase() + 0x466FE14))(0);
	}
	template <typename T = int32_t> static T GetTeamType() {
		return ((T (*)(void *))(Il2CppBase() + 0x466FEAC))(0);
	}
	template <typename T = int32_t> static T GetGameMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x466FF90))(0);
	}
	template <typename T = int32_t> static T GetGameType() {
		return ((T (*)(void *))(Il2CppBase() + 0x4670074))(0);
	}
	template <typename T = uint32_t> static T GetLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x4670170))(0);
	}
	template <typename T = Il2CppString*> static T GetRegisterTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x467025C))(0);
	}
	template <typename T = Il2CppString*> static T GetRegisterPlatform() {
		return ((T (*)(void *))(Il2CppBase() + 0x467038C))(0);
	}
	template <typename T = int32_t> static T GetPing() {
		return ((T (*)(void *))(Il2CppBase() + 0x46704B4))(0);
	}
	template <typename T = int32_t> static T get_ZoneAreaID() {
		return ((T (*)(void *))(Il2CppBase() + 0x4670634))(0);
	}
	template <typename T = int32_t> static T GetReason() {
		return ((T (*)(void *))(Il2CppBase() + 0x467063C))(0);
	}
	template <typename T = uint32_t> static T GetRoomTimeStamp() {
		return ((T (*)(void *))(Il2CppBase() + 0x46706D4))(0);
	}
	template <typename T = Il2CppString*> static T GetUserName() {
		return ((T (*)(void *))(Il2CppBase() + 0x46707B8))(0);
	}
	template <typename T = uint64_t> static T GetGameInfoPlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x4670A34))(0);
	}
	template <typename T = uint64_t> static T GetPlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x4670B18))(0);
	}
	template <typename T = void> static T NotifyServerFireMode(bool isBR) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4670BFC))(0, isBR);
	}
	template <typename T = int32_t> static T GetSettingsNotification() {
		return ((T (*)(void *))(Il2CppBase() + 0x4670D58))(0);
	}
	template <typename T = Il2CppString*> static T GetSettingsShootingMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4670E2C))(0);
	}
	template <typename T = int32_t> static T GetSettingsDoubleFireReverse() {
		return ((T (*)(void *))(Il2CppBase() + 0x4670F14))(0);
	}
	template <typename T = Il2CppString*> static T GetGraphicQuality() {
		return ((T (*)(void *))(Il2CppBase() + 0x4670FAC))(0);
	}
	template <typename T = Il2CppString*> static T GetGraphicFrames() {
		return ((T (*)(void *))(Il2CppBase() + 0x46710D4))(0);
	}
	template <typename T = int32_t> static T GetGraphicHDR() {
		return ((T (*)(void *))(Il2CppBase() + 0x46711FC))(0);
	}
	template <typename T = int32_t> static T GetGraphicDOF() {
		return ((T (*)(void *))(Il2CppBase() + 0x46712D4))(0);
	}
	template <typename T = Il2CppString*> static T GetGraphicBrStyle() {
		return ((T (*)(void *))(Il2CppBase() + 0x46713AC))(0);
	}
	template <typename T = Il2CppString*> static T GetGraphicPvpStyle() {
		return ((T (*)(void *))(Il2CppBase() + 0x46714D4))(0);
	}
	template <typename T = Il2CppString*> static T GetPvpControlPlan() {
		return ((T (*)(void *))(Il2CppBase() + 0x46715FC))(0);
	}
	template <typename T = int32_t> static T GetAdjustScreenMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x467172C))(0);
	}
	template <typename T = Il2CppString*> static T GetAudioValue() {
		return ((T (*)(void *))(Il2CppBase() + 0x467180C))(0);
	}
	template <typename T = Il2CppString*> static T GetHudLayoutConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x46718F4))(0);
	}
	template <typename T = Il2CppString*> static T GetJoystickConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x4671E5C))(0);
	}
	template <typename T = Il2CppString*> static T GetWindowName() {
		return ((T (*)(void *))(Il2CppBase() + 0x4672148))(0);
	}
	template <typename T = Il2CppString*> static T GetGameAppId() {
		return ((T (*)(void *))(Il2CppBase() + 0x46722B8))(0);
	}
	template <typename T = Il2CppString*> static T GetCountryId() {
		return ((T (*)(void *))(Il2CppBase() + 0x4672404))(0);
	}
	template <typename T = int32_t> static T GetPlatId() {
		return ((T (*)(void *))(Il2CppBase() + 0x4672564))(0);
	}
	template <typename T = int32_t> static T GetNetwork() {
		return ((T (*)(void *))(Il2CppBase() + 0x46725FC))(0);
	}
	template <typename T = int32_t> static T GetUserSettingLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x46726C0))(0);
	}

};

}
